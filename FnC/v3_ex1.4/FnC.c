#include <stdio.h>

/* print Celsius-Fahrenheit table
   for celsius = -10, -9, ..., 20; floating-point version */

main() {
    /* exercise 1-3, print a heading */
    printf("This program converts celsius to fahrenheit\n");

    float fahr, celsius;
    int lower, upper, step;

    lower = -10;
    upper = 20;
    step = 1;

    celsius = lower;
    while (celsius <= upper) {
/*        celsius = (5.0/9.0) * (fahr-32.0); */
        fahr = celsius * 9.0 / 5.0 + 32;
        printf("%6.1f %3.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
