#include <stdio.h>

int main() {
    
    for (int i = 32; i <= 126; i++) {
        printf("%-8d %-12X %c\n", i, i, i);
    }

    return 0;
}