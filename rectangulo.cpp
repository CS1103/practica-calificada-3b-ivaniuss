//
// Created by Ivan Mamani on 17/11/2019.
//

#include "rectangulo.h"

rectangulo::rectangulo() {
    _action = ' ';
    _high = 0;
    _width = 0;
    _esquina.first = 0;
    _esquina.second = 0;
}
rectangulo::~rectangulo() {

}
void rectangulo::set_action(char action)  {
    _action = action;
}


void rectangulo::set_high(int high) {
    _high = high;
}

void rectangulo::set_width(int width) {
    _width = width;
}

void rectangulo::set_esquina(int first,int second) {
    _esquina.first = first;
    _esquina.second = second;
}

char rectangulo::get_action() {
    return _action;
}

int rectangulo::get_high() {
    return _high;
}

int rectangulo::get_width() {
    return _width;
}

int rectangulo::get_esquina_first() {
    return _esquina.first;
}



int rectangulo::get_esquina_second() {
    return _esquina.second;
}
ostream &operator << (ostream & os, rectangulo *r){

    os << r->get_action()<<" "<<r->get_esquina_first()<<" "<<r->get_esquina_second()
       <<" "<<r->get_high()<<" "<<r->get_width()<<endl;
    return os;
}

