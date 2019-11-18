//
// Created by Ivan Mamani on 17/11/2019.
//

#ifndef PC3B_FUNCIONES_H
#define PC3B_FUNCIONES_H

#include "funciones.h"
#include "rectangulo.h"
#include "tablero.h"

void read(string filename, tablero *t);
void write(std::string filename, tablero *t);
bool inside(rectangulo a, rectangulo b);
bool valid(rectangulo a, vector<rectangulo*> rectangulos);


#endif //PC3B_FUNCIONES_H
