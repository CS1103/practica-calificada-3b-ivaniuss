
#include "funciones.h"
#include "rectangulo.h"
#include "tablero.h"

int main() {
    tablero *t = nullptr;
    t = new tablero();

    read("rectangulos.in",t);

    write("rectangulo.out", t);

    for (auto & item: t->get_rectangles()){
        cout<<item->get_action()<<' '<<item->get_esquina_first()<<' '<<item->get_esquina_second()<<' '<<item->get_high()<<' '<<item->get_width()<<'\n';
    }
    cout<<t->get_size();

    return 0;
}