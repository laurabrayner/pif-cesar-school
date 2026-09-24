#include <stdio.h>
#include <math.h> 

int main(){
const float pi =  3.14159265;
float area, raio, volume; 

printf("Defina o valor do raio: ");
scanf("%f", &raio);

area = 4 * pi * pow(raio, 2);
volume = (4.0/3.0) * pi * pow(raio, 3);

printf("A area e o volume da esfera, sao, respectivamente, %.3f %.3f", area, volume);

return 0;

}