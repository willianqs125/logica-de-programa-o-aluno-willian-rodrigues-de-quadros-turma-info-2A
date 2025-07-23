#include <stdio.h>

int main()
{
    int primeironumero, segundonumero, adresultado, subresultado, multresultado, divresultado, restoresultado;

    printf ("Digite um numero: ");
    scanf ("%d", &primeironumero);
    printf ("Digite um numero: ");
    scanf ("%d", &segundonumero);

    adresultado = primeironumero + segundonumero;
    subresultado = primeironumero - segundonumero;
    multresultado = primeironumero * segundonumero;
    divresultado = primeironumero/segundonumero;
    restoresultado = primeironumero % segundonumero;

    printf ("Resultado das operações: \n");
    printf ("Soma: %d\n", adresultado);
    printf ("Subtração: %d\n", subresultado);
    printf ("Multiplicação: %d\n", multresultado);
    printf ("Quociente: %d\n", divresultado);
    printf ("Resto: %d\n", restoresultado);

    return 0;
}
