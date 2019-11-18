//
// Created by Ivan Mamani on 17/11/2019.
//

#include "funciones.h"
#include "tablero.h"
#include <algorithm>


bool inside(rectangulo *x, rectangulo *y){
    return (y->get_esquina_first() < x->get_esquina_first() &&
            y->get_esquina_first() + y->get_width() > x->get_esquina_first() + x->get_width())
           && (y->get_esquina_second() > x->get_esquina_second() &&
               y->get_esquina_second() - y->get_high() < x->get_esquina_second() - x->get_high());
}




bool valid(rectangulo* x, vector<rectangulo*> rectangles){
    for(auto&y:rectangles){

        pair<int, int> l1 = make_pair(x->get_esquina_first(), x->get_esquina_second());
        pair<int, int> l2 = make_pair(y->get_esquina_first(), y->get_esquina_second());
        pair<int, int> r1 = make_pair(x->get_esquina_first()+x->get_high(), x->get_esquina_second()-x->get_high());
        pair<int, int> r2 = make_pair(y->get_esquina_first()+y->get_high(), y->get_esquina_second()-y->get_high());

        if(inside(x,y) or inside(y,x)) {
            continue;
        }

        if( l1.first < r2.first && r1.first > l2.first &&
            l1.second > r2.second && r1.second < l2.second)
            return false;
    }
    return true;
}
void read(string filename, tablero *t) {
    int nrectangulos, filas, columnas;
    string line;
    fstream file(filename, ios::in);
    getline(file, line);
    stringstream s(line);
    s >> nrectangulos >> filas >> columnas;
    t->setNrectangulosm(nrectangulos);
    t->setNrows(filas);
    t->setNcolumns(columnas);

    for (int i = 0; i < t->getNrectangulosm(); ++i) {
        char action;
        int high, width, first, second;
        file >> action >> first >> second >> high >> width;

        rectangulo *r = nullptr;
        r = new rectangulo();
        r->set_action(action);
        r->set_high(high);
        r->set_width(width);
        r->set_esquina(first, second);

        if(valid(r, t->get_rectangles()))
            t->add_rec(r);
    }
    t->sorting();
}

bool comp(rectangulo& a, rectangulo& b){
    if(a.get_esquina_first() != b.get_esquina_first()){
        return a.get_esquina_first() < b.get_esquina_first();
    }
    else{
        if(a.get_esquina_second() != b.get_esquina_second())
            return a.get_esquina_second() < b.get_esquina_second();
        else
            return (a.get_high() * a.get_width()) < (b.get_high() * b.get_width());
    }
}


void write(string file, tablero *t) {
    fstream out(file, ios::out);
    for (auto & item: t->get_rectangles()){
        out<<item->get_action()<<' '<<item->get_esquina_first()<<' '<<item->get_esquina_second()<<' '<<item->get_high()<<' '<<item->get_width()<<'\n';
    }

}
