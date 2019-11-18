//
// Created by Ivan Mamani on 17/11/2019.
//

#include "tablero.h"

tablero::tablero() {

}

tablero::~tablero() {

}

int tablero::getNrectangulosm() const {
    return _nrectangulosm;
}

void tablero::setNrectangulosm(int nrectangulosm) {
    _nrectangulosm = nrectangulosm;
}

int tablero::getNrows() const {
    return _nrows;
}

void tablero::setNrows(int nrows) {
    _nrows = nrows;
}

int tablero::getNcolumns() const {
    return _ncolumns;
}

void tablero::setNcolumns(int ncolumns) {
    _ncolumns = ncolumns;
}

void tablero::add_rec(rectangulo *rectangle) {
    _r.emplace_back(rectangle);
}


void tablero::sorting() {
    sort(begin(_r), end(_r));


}


vector<rectangulo*> tablero::get_rectangles() {
    return _r;
}

int tablero::get_size() {
    return _r.size();
}

