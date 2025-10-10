#include <stdio.h>
#include <math.h>

typedef struct{
    float x;
    float y;
    float r;
} tCirculo;

float AchaDist(float x1, float y1, float x2, float y2){
    int result;

    result = sqrt(pow((x1-x2), 2) + pow((y1-y2), 2));

    return result;
}

int main(){
    int soma_raios, dist_raios;
    tCirculo alvo, disparo;

    scanf("%f %f %f\n", &alvo.x, &alvo.y, &alvo.r);
    scanf("%f %f %f", &disparo.x, &disparo.y, &disparo.r);

    soma_raios = alvo.r + disparo.r;
    dist_raios = AchaDist(alvo.x, alvo.y, disparo.x, disparo.y);
    
    if(dist_raios > soma_raios){
        printf("ERROU");
    }else{
        printf("ACERTOU");
    }
}