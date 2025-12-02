#include <stdio.h>
#include "string_utils.h"

/**
 * @brief Retorna o tamanho de uma string.
 * @param str A string para obter o tamanho.
 * @return O tamanho da string.
 */
int string_length(char *str){
    int tamanho = 0, i = 0;

    while(str[i] != '\0'){
        i++;
        tamanho++;
    }
    return tamanho;
}

/**
 * @brief Copia uma string de origem para destino.
 * @param src A string de origem.
 * @param dest A string de destino.
 */
void string_copy(char *src, char *dest){
    int i = 0;

    while(src[i] != '\0'){
        dest[i] = src[i];
        i++;

    }
    dest[i] = '\0';
  
}

/**
 * @brief Converte todos os caracteres de uma string para maiúsculas.
 * @param str A string para converter.
 */
void string_upper(char *str){
    int i;

    while(str[i] != '\0'){

        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - ('a' - 'A');

        }
        i++;
    
    }    
}

/**
 * @brief Converte todos os caracteres de uma string para minúsculas.
 * @param str A string para converter.
 */
void string_lower(char *str){
    int i;

    while(str[i] != '\0'){

        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + ('a' - 'A');

        }
        i++;
    
    }      
}

/**
 * @brief Inverte uma string.
 * @param str A string para inverter.
 */
void string_reverse(char *str){
    int tamanho, i;
    
    tamanho = string_length(str);
    char cop[tamanho];

    string_copy(str, cop);

    for(i = 0; i < tamanho; i++){
        str[i] = cop[tamanho-i-1];    
    }
}

