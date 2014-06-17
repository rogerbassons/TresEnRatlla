#include "Tauler.h"

Tauler::Tauler() {
    for (int i=0;i<3;i++) {
        for (int j=0;j<3;j++) a_t[i][j]=' ';
    }
}

bool Tauler::ple() const {
    bool ple = true;
    int i,j;
    i = j = 0;
    while (ple and i < 3) {
        while (ple and j < 3) {
            ple = a_t[i][j] != ' ';
            j++;
        }
        j = 0;
        i++;
    }
    return ple;
}

bool Tauler::tresEnRatlla(char torn) const {
    bool ratlla = false;

    int i = 0;
    while (not ratlla and i < 3) {
        ratlla = torn == a_t[i][0] and torn == a_t[i][1] and torn == a_t[i][2];
        i++;
    }

    if (ratlla) return true;

    i = 0;
    ratlla = false;
    while (not ratlla and i < 3) {
        ratlla = torn == a_t[0][i] and torn == a_t[1][i] and torn == a_t[2][i];
        i++;
    }

    if (ratlla) return true;

    ratlla = torn == a_t[0][0] and torn  == a_t[1][1] and torn ==  a_t[2][2];

    if (ratlla) return true;

    ratlla = torn == a_t[0][2] and torn ==  a_t[1][1] and torn == a_t[2][0];
    return ratlla;
}

void Tauler::insereix(char torn, int fila, int columna) {
    if (not (fila >= 0 and fila < 3 and columna >= 0 and columna < 3 and a_t[fila][columna]!='X' and a_t[fila][columna]!='O'))
        cout << "No es pot posar '" << torn << "' a la posicio indicada" << endl;
    else
        a_t[fila][columna] = torn;
}

ostream & operator <<(ostream & o, Tauler & t) {

    o << "-------";

    o << endl;
    for (int i=0;i<3;i++) {
        o << "|";
        for (int j=0;j<3;j++) {
            o << t.a_t[i][j] << "|";
        }
        o << endl << "-------" << endl;
    }

    return o;
}
