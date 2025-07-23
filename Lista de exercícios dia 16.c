#include <stdio.h>
#include <stdlib.h>

int main()
{
    int primeiron, segundon;

    printf("Informe um numero: ");
    scanf("%d", &primeiron);
    printf("Informe o segundo numero: ");
    scanf("%d", &segundon);

    if (primeiron%segundon==0){
        printf(" numeros multiplos.");
    }else{
        printf(" numeros não são multiplos.");
    }
}


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int primeiron, segundon, soma, subt, mult, divi, resto;

    printf("Informe um numero: ");
    scanf("%d", &primeiron);
    printf("Informe o segundo numero: ");
    scanf("%d", &segundon);

    soma = primeiron + segundon;
    sub = primeiron - segundon;
    mult = primeiron * segundon;
    div = primeiron/segundon;
    resto = primeiron%segundon;

    printf("Soma: %d + %d = %d\n", primeiron, segundon, soma);
    printf("Subtração: %d - %d = %d\n", primeiron, segundon, subt);
    printf("Multiplicação: %d * %d = %d\n", primeiron, segundon, mult);
    printf("Divisão: %d / %d = %d\n", primeiron, segundon, divi);
    printf("Resto: %d %% %d = %d\n", primeiron, segundon, resto);

}


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Numero;

    printf("Informe um numero: ");
    scanf("%d", &Numero);

    if(a%2==0){
        printf(" numero par.");
    }else{
        printf(" numero impar.");
    }
}

#include <stdio.h>

int main()
{
        printf("Total = 100%%\n Iva  = 17%%\n IRS  = 15%%\n -----------\n LIQU  = 68%%");

    return 0;
}
