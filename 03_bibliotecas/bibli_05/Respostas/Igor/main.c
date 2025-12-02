#include <stdio.h>
#include "string_utils.h"

int main(){
    char str[100];
    int opcao;
    
    scanf("%[^\n]\n", str);

    while(1){

        printf("1 - Tamanho da string\n");
        printf("2 - Copiar string\n");
        printf("3 - Converter string para letras maiusculas\n");
        printf("4 - Converter string para letras minusculas\n");
        printf("5 - Imprimir string ao contrario\n");
        printf("6 - Encerrar o programa\n");
        printf("Opcao escolhida:\n");

        scanf("%d", &opcao);

        if(opcao == 1){
            printf("Tamanho da string: %d\n", string_length(str));
            printf("\n");

        }else if(opcao == 2){
            char copia[100];
            string_copy(str, copia);

            printf("String copiada: %s\n", copia);            
            printf("\n");
       
        }else if(opcao == 3){
            string_upper(str);

            printf("String convertida para maiusculas: %s\n", str);            
            printf("\n");
       
        }else if(opcao == 4){
            string_lower(str);
            
            printf("String convertida para minusculas: %s\n", str);            
            printf("\n");
              
        }else if(opcao == 5){
            string_reverse(str);
            
            printf("String invertida: %s\n", str);            
            printf("\n");

        }else if(opcao == 6){
            break;
        }
    
    }

}