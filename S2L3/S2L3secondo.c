#include <stdio.h>

int main()
{

    int primo_numero;
    int secondo_numero;
    int media;

    printf("inserisci primo_numero: \n");
    scanf("%d", &primo_numero);

    printf("inserisci secondo_numero: \n");
    scanf("%d", &secondo_numero);

    media = (primo_numero + secondo_numero) / 2;

    printf("la media dei due numeri inseriti è: %d\n", media);

    return 0;
}