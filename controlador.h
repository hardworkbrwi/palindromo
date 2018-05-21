#ifndef CONTROLADOR_H
#define CONTROLADOR_h

#include "pilha.h"

class Controlador{
    private:
        Pilha<char> pilha1;
        string texto = "", texto_aux = "";
        bool palindromo = true;
        
        string compactaCaracteres( string );        
        void empilhar();

    public:
        Controlador( string );
        ~Controlador();
        void isPalindromo();
};

#endif