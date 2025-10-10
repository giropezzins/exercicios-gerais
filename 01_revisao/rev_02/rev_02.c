#include <stdio.h>

int main(){
    int n, final, numero, linha, i;

    scanf("%d", &n);

    linha = 1;
    numero = 1;

    for(linha; linha <= n; linha++){
        for(i = 0; i < linha; i++){
            printf("%d ", numero);
            numero++;
        }
        printf("\n");
    }
    
}