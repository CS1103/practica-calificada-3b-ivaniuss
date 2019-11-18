//
// Created by Ivan Mamani on 17/11/2019.
//

#ifndef PC3B_RECTANGULO_H
#define PC3B_RECTANGULO_H

#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
using namespace std;
class rectangulo {
    char _action;
    int _high, _width;
    pair<int, int> _esquina;
public:
    rectangulo();

    ~rectangulo();
    void set_action(char action);
    void set_high(int high);
    void set_width(int width);
    void set_esquina(int first, int second);
    char get_action();
    int get_high();
    int get_width();
    int get_esquina_first();
    int get_esquina_second();
    void sorting();
    friend ostream &operator << (ostream & os, rectangulo *r);

};


#endif //PC3B_RECTANGULO_H
