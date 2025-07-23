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
