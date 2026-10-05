#include <stdio.h>

int main() {
    float celsius, fahrenheit, kelvin;

    for (celsius = 0.0; celsius <= 100.0; celsius += 5.0) {
        fahrenheit = (9.0 * celsius) / 5.0 + 32.0;
        kelvin = celsius + 273.15;

        
        printf("%.2f %.2f %.2f\n", celsius, fahrenheit, kelvin);
    }

    return 0;
}