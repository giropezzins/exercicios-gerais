#include <stdio.h>
#include "esfera_utils.h"

int main(){
    float R, vol, area;
    scanf("%f", &R);

    area = calcula_area(R);
    vol = calcula_volume(R);

    printf("Area: %.02f\nVolume: %.02f\n", area, vol);

    return 0;
}

//Area: 181.37
//Volume: 229.73