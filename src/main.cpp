/** 
 *  @file    main.cpp
 *  @author  Bruno César
 *  @author Willian Talles
 *  @date    26/05/2018  
 *  @version 1.0 
 *  
 *  @brief Lab 2, Manipula as classes para análise de palíndromos
 *
 *  @section DESCRIÇÃO
 *  
 *  Recebe o texto para operar sob o controlador
 *  a fim de verificar se é palíndromo
 *  
 */

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