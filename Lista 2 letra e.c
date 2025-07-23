#include <stdio.h>

int main()
{
    float temperaturaCelsius, temperaturaFah;

    printf("Informe a temperatura em Fahrenheit: ");
    scanf("%f", &temperaturaFah);

    temperaturaCelsius = ((temperaturaFah - 32) * 5)/9;

    printf("A temperatura em Celsius é: %f", temperaturaCelsius);

    return 0;
}
