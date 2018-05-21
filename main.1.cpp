#include <iostream>
#include <cstdlib>

#include "pilha.h"
#include "controlador.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

string compactaCaracteres(string texto){
    string aux = "";
    int cont = 0, caracter = ' ';
    while( cont < (int)texto.size() ){
        caracter = texto[cont];
        if( caracter > 64 && caracter < 90 )
            aux += tolower(texto[cont]);
        else if( caracter > 96 && caracter < 123 )
            aux += texto[cont];

        cont++;
    }

    return aux;
}

int main(){

    //Pilha<char> pilha1;
    string texto = "", texto_aux = "";
    //int cont = 0;
    //bool palindromo = true;

    std::cout << "Entre com o texto para verificar se é palíndromo." << std::endl;
    getline(std::cin, texto);

    Controlador controlador( texto );
    controlador.isPalindromo();



    /* 
    texto_aux = compactaCaracteres(texto);
    int metade = (int)(texto_aux.size()/2);
   
    while( cont < metade ){
        pilha1.empilhar(texto_aux[cont]);;
        cont++;
    }
 
    //Comparando caracteres
    cont = 0;
    while( cont < pilha1.getTamanho() ){
        
        if( texto_aux.size()%2 == 0){
            if( texto_aux[metade-cont-1] != pilha1.topo() ){
                cout << texto_aux[metade-cont-1] << " = " << pilha1.topo() << endl;
                palindromo = false;
                break;
            }
        }else{
            if( texto_aux[metade + cont+1] != pilha1.topo() ){
                cout << texto_aux[metade+cont+1] << " = " << pilha1.topo() << endl;
                palindromo = false;
                break;
            }
        }
        pilha1.desempilhar();
        cont++;
    }

    if(palindromo)
        cout << "O texto \"" <<  texto << "\" é palindromo" << endl;
    else
        cout << "O texto \"" <<  texto << "\" não é palindromo" << endl;
 */
    return 0;
}