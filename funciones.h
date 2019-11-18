//
// Created by Ivan Mamani on 17/11/2019.
//

#ifndef PC3B_FUNCIONES_H
#define PC3B_FUNCIONES_H


#include "rectangulo.h"
#include "tablero.h"

void read(string filename, tablero *t);
void write(const string& filename, tablero *t);
bool inside(rectangulo *x, rectangulo *y);
bool valid(rectangulo *x, vector<rectangulo*> rectangulos);

#endif //PC3B_FUNCIONES_H
