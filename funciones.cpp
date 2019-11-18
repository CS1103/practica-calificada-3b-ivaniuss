//
// Created by Ivan Mamani on 17/11/2019.
//

#include "funciones.h"
#include "tablero.h"
void read(string filename) {
    tablero *t = nullptr;
    t = new tablero();
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
        t->add_rec(r);
        cout<<r;
    }
    cout<<t->get_size();

}