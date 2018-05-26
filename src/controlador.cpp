/** 
 *  @file    controlador.cpp
 *  @author  Bruno César Lopes da Silva
 *  @author  Willian Talles Marcolino Dantas
 *  @date    26/05/2018  
 *  @version 1.0 
 *  
 *  @brief Lab 4, operações para análise de palíndromo
 *
 *  @section DESCRIÇÃO
 *  
 *  Trata e identifica ocorrências de textos
 *  palíndromos.
 *  
 */

#include "controlador.h"

using std::string;
using std::cout;
using std::endl;

Controlador::Controlador( string texto){
    this->texto = texto;
    texto_aux = compactaCaracteres( texto );
    palindromo = true;

    empilhar();
}

Controlador::~Controlador(){}

string Controlador::compactaCaracteres( string texto ){
    string aux = "";
    int cont = 0, caracter = ' ';
    while( cont < (int)texto.size() ){
        // Desconsidera os espaços em branco
        caracter = texto[cont];
        if( caracter > 64 && caracter < 90 )
            // Converte os caracteres para minúsculo
            aux += tolower(texto[cont]);
        else if( caracter > 96 && caracter < 123 )
            aux += texto[cont];

        cont++;
    }

    // Retorna o texto tratado sem espaços e/ou caracteres especiais
    return aux;
}

void Controlador::isPalindromo(){
    //Comparando caracteres
    int cont = 0;
    int metade = (int)(texto_aux.size()/2);
    
    while( cont < metade ){
        // Verifica se a quantidade de caracteres é par ou ímpar
        if( texto_aux.size()%2 == 0){
            /* Compara o caracter do topo da pilha com a sequência da
            segunda metade do texto anteriormente tratado */
            if( texto_aux[metade+cont] != pilha1.topo() ){
                palindromo = false;
                break;
            }
        }else{
            if( texto_aux[metade + cont+1] != pilha1.topo() ){
                palindromo = false;
                break;
            }
        }
        // Remove o caracter do topo da pilha
        pilha1.desempilhar();
        cont++;
    }

    if(palindromo)
        cout << "O texto \"" <<  texto << "\" é palindromo" << endl;
    else
        cout << "O texto \"" <<  texto << "\" não é palindromo" << endl;
}

void Controlador::empilhar(){
    int cont = 0;
    int metade = (int)(texto_aux.size()/2);
    // Empilha cada caracter do texto no container pilha
    while( cont < metade ){
        pilha1.empilhar(texto_aux[cont]);
        cont++;
    }
}