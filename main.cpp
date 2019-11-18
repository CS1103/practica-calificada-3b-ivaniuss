
#include "funciones.h"
#include "rectangulo.h"
#include "tablero.h"

int main() {
    tablero *t = nullptr;
    t = new tablero();

    read("rectangulos.in",t);
    write("rectangulo.out", t);


    cout<<t->get_size();

    return 0;
}