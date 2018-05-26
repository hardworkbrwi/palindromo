#include "controlador.h"

using std::string;
using std::cout;
using std::endl;

Controlador::Controlador( string texto){
    this->texto = texto;
    texto_aux = compactaCaracteres( texto );
    palindromo = true;
    //cout << texto_aux;

    empilhar();
}

Controlador::~Controlador(){}

string Controlador::compactaCaracteres( string texto ){
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

void Controlador::isPalindromo(){
    //Comparando caracteres
    int cont = 0;
    int metade = (int)(texto_aux.size()/2);
    
    while( cont < metade ){
        if( texto_aux.size()%2 == 0){
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
    
    while( cont < metade ){
        pilha1.empilhar(texto_aux[cont]);
        cont++;
    }
}