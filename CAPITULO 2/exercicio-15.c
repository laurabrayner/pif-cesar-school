#include <stdio.h>

int main(){
    float nota1, nota2, nota3, nota4, media, mediapon;
  
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    printf("Digite a quarta nota: ");
    scanf("%f", &nota4);


    media = (nota1 + nota2 + nota3 + nota4)/ 4.0;
    mediapon = (nota1*1)+(nota2*1)+(nota3*2)+(nota4*2)/6.0;

    printf("A media eh, %.2f , e a media ponderada eh, %.2f", media, mediapon);

    return 0;

}