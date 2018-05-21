#include <iostream>
#include <cstdlib>

#include "controlador.h"

using std::cin;
using std::string;

int main(){

    string texto = "", texto_aux = "";
    
    std::cout << "Entre com o texto para verificar se é palíndromo." << std::endl;
    getline(std::cin, texto);

    Controlador controlador( texto );
    controlador.isPalindromo();

    return 0;
}