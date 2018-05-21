#include <iostream>
#include <cstdlib>

#include "pilha.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

string compactaCaracteres(string texto){
    string aux = "";
    int cont = 0, caracter = ' ';
    while( cont < (int)texto.size() ){
        caracter = texto[cont];
        if( caracter > 40 && caracter < 90 )
            aux += tolower(texto[cont]);
        else if( caracter > 96 && caracter < 123 )
            aux += texto[cont];

        cont++;
    }

    return aux;
}

int main(){
    Pilha<char> pilha1;
    string texto = "", texto_aux = "";
    int cont = 0;

    std::cout << "Entre com o texto para verificar se é palíndromo." << std::endl;
    getline(std::cin, texto);
    texto_aux = compactaCaracteres(texto);
    //cout << texto.size()/2 << endl;
    int metade = (int)(texto_aux.size()/2);

    while( cont < metade ){
        pilha1.empilhar(texto_aux[cont]);;
        cont++;
    }

    //Comparando caracteres
    cont = 0;
    bool palindromo = true;
    string aux;
    while( cont < pilha1.getTamanho() ){
        if( texto.size()%2 == 0){
            if( texto[metade] != pilha1.topo() ){
                palindromo = false;
                break;
            }
        }else{
            if( texto[metade + 1] != pilha1.topo() ){
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

    /* pilha1.empilhar(4);
    pilha1.empilhar(8);
    pilha1.empilhar(6);
    pilha1.empilhar(1);
    pilha1.empilhar(15);
 */
    /* std::cout << std::endl;
    std::cout << pilha1.topo() << std::endl;

    std::cout << pilha1.getTamanho() << std::endl; */

    //cout << pilha1;

    int c = ' ';
    c = texto[2];
    cout << c << endl;


    return 0;
}