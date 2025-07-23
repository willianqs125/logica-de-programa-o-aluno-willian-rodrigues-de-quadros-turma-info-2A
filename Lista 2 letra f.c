#include <stdio.h>

int main()
{
    float volume, raio, altura;
    const double pi = 3.14159;

    printf("Informe raio da base: ");
    scanf("%f", &raio);
    printf("Informe altura: ");
    scanf("%f", &altura);

    volume = pi * raio * altura;

    printf("O volume é: %.f", volume);
}
