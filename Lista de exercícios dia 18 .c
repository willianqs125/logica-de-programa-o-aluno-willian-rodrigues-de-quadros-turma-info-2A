#include <stdio.h>

int main(){
    int dia, mes, ano;

    printf("Fale o dia : ");
    scanf("%d", &dia);
    printf("Fale o mês : ");
    scanf("%d", &mes);
    printf("Fale o ano: ");
    scanf("%d", &ano);

    printf("%d/%d/%d", dia, mes, ano);

}

#include <stdio.h>

int main(){
    int dia, mes, ano;

    printf("Digite qualquer data em aaa-mm-dd: ");
    scanf("%d-%d-%d", &ano, &mes, &dia);

    printf("%d/%d/%d", dia, mes, ano);

    return 0;
}

