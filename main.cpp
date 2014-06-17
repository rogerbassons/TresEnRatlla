#include <iostream>
#include "Partida.h"

using namespace std;

int main() {
    Partida p;
    while (not p.acabada()) {
        p.jugar();
    }
    p.mostrarGuanyador();
    return 0;
}
