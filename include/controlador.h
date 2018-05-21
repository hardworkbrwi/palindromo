#ifndef CONTROLADOR_H
#define CONTROLADOR_h

//#include <string>
#include "pilha.h"

class Controlador{
    private:
        Pilha<char> pilha1;
        std::string texto;
        std::string texto_aux;
        bool palindromo = true;
        
        std::string compactaCaracteres( std::string );        
        void empilhar();

    public:
        Controlador( std::string );
        ~Controlador();
        void isPalindromo();
};

#endif