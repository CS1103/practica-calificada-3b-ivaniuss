//
// Created by Ivan Mamani on 17/11/2019.
//

#ifndef PC3B_TABLERO_H
#define PC3B_TABLERO_H

#include <iostream>
#include <vector>
#include "rectangulo.h"

using namespace std;

class tablero {
    int _nrectangulosm, _nrows, _ncolumns;
    vector<rectangulo*> _r;
public:
    tablero();
    ~tablero();
    int getNrectangulosm() const;
    void setNrectangulosm(int nrectangulosm);
    int getNrows() const;
    void setNrows(int nrows);
    int getNcolumns() const;
    void setNcolumns(int ncolumns);
    void add_rec(rectangulo* rectangle);
    int get_size();


};


#endif //PC3B_TABLERO_H
