#include <stdio.h>

int main() {
int i; 

for (i=1; i <= 100; i++){
    int multiplo = i*3;

    printf("%d\t", multiplo);

        i % 10 == 0 ? printf("\n") : 0;
 }


}


