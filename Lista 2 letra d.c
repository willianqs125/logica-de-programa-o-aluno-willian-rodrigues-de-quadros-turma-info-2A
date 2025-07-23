#include <stdio.h>

int main()
{
    float temperaturaCelsius, temperaturaFah;

    printf ("Informe a temperatura em Celsius: ");
    scanf ("%f", &temperaturaCelsius);

    temperaturaFah = (9 * temperaturaCelsius + 160) / 5;

    printf ("A temperatura em Fahrenheit é: %f", temperaturaFah);

    return 0;
}
