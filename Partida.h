#ifndef PARTIDA_H
#define PARTIDA_H
#include "Tauler.h"

class Partida 
{
    public:
        
        Partida();

        bool acabada() const;
        void mostrarGuanyador();

        void jugar();
    
    private:
       
        char a_torn; // X o O
        Tauler a_t;    
        
        void passarTorn();
};

#endif //PARTIDA_H
