#include <stdio.h>
#include "temperature_conversor.h"

int main(){
    float temperatura;
    char origem, final;

    scanf("%f %c %c", &temperatura, &origem, &final);

    if(origem == 'c'){

        if(final == 'f'){
          printf("Temperature: %.02fFº", convert_temperature(temperatura, convert_celsius_to_fahrenheit));
              
        }else if(final == 'k'){
          printf("Temperature: %.02fK", convert_temperature(temperatura, convert_celsius_to_kelvin));
            
        }        

    }else if(origem == 'f'){

        if(final == 'c'){
          printf("Temperature: %.02fCº", convert_temperature(temperatura, convert_fahrenheit_to_celsius));

        }else if(final == 'k'){
          printf("Temperature: %.02fK", convert_temperature(temperatura, convert_fahrenheit_to_kelvin));
            
        }
    }else if(origem == 'k'){

        if(final == 'c'){
          printf("Temperature: %.02fCº", convert_temperature(temperatura, convert_kelvin_to_celsius));

        }else if(final == 'f'){
          printf("Temperature: %.02fFº", convert_temperature(temperatura, convert_kelvin_to_fahrenheit));

        }
    }

    return 0;
}