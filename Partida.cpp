#include "Partida.h"
#include <iostream>

using namespace std;

Partida::Partida() {
    a_torn = 'X';
}

bool Partida::acabada() const {
    
    return a_t.ple() or a_t.tresEnRatlla('X') or a_t.tresEnRatlla('O');
}

void Partida::mostrarGuanyador()  {   
    passarTorn();
	if (a_t.tresEnRatlla(a_torn)) {
        cout << a_t;
        cout << "Les " << a_torn << " han guanyat!" << endl;
	}
	else cout << "Ningu ha guanyat..." << endl;
}

void Partida::jugar() { 
    
    cout << a_t;
    
    cout << "Torn de les " << a_torn << ":" << endl;
    
    int fila;
    cout << "Fila:" << endl;
    cin >> fila;

    int columna;
    cout << "Columna:" << endl;
    cin >> columna;
 
    a_t.insereix(a_torn,fila,columna);

    passarTorn();
}

void Partida::passarTorn() {
    if (a_torn == 'X') a_torn = 'O';
    else a_torn = 'X';
}

