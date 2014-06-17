#ifndef TAULER_H
#define TAULER_H
#include <iostream>

using namespace std;

class Tauler 
{
    public:

        Tauler();

        bool ple() const;
        bool tresEnRatlla(char torn) const; // torn és X o O

        void insereix(char torn, int fila, int columna);
        
        friend ostream & operator <<(ostream & o, Tauler & t);
    private:
        
        char a_t[3][3];
};

#endif // TAULER_H
