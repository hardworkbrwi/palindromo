/**
 * @file	controlador.h
 * @brief	Implementação da classe Controlador em C++
 * @author	Bruno César L. Silva
 * @author	Willian Talles Marcolino Dantas
 * @since	19/05/2018
 * @date	26/05/2018
 */

#ifndef CONTROLADOR_H
#define CONTROLADOR_h

#include "pilha.h"

/**
* @brief Implementacao da classe Controlador
* @detail Opera sobre a pilha para identificar possíveis palíndromos
*/
class Controlador{
    private:
        Pilha<char> pilha1; /**< Container do tipo pilha para armazenar os caracteres da string */
        std::string texto; /**< Armazenar a string de entrada do usuário */
        std::string texto_aux; /**< Armazenar string alterada */
        bool palindromo = true; /**< identifica se uma string é palindroma ou não */
        
        /**
        * @brief Método que trata a string capturada da entrada padrão
        * @detail Deixa a string minúsculas
        * @param string - valor do texto a ser analisado
        */
        std::string compactaCaracteres( std::string );

        /**
        * @brief Método para popular container - pilha
        */      
        void empilhar();

    public:
        /**
        * @brief Método construtor parametrizado de Controlador
        * @param string - Valor do texto para analise
        */  
        Controlador( std::string );
 
        /**
        * @brief Método destrutor de Controlador
        */
        ~Controlador();

        /**
        * @brief Método para analisar se o texto é palíndromo
        */
        void isPalindromo();
};

#endif