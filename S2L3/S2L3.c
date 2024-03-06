#include <stdio.h>

int main()
{

    int primo_numero;
    int secondo_numero;
    int moltiplicazione;

    printf("inserisci il numero primo:\n");
    scanf("%d", &primo_numero);

    printf("inserisci il numero secondo:\n");
    scanf("%d", &secondo_numero);

    moltiplicazione = primo_numero * secondo_numero;

    printf("il rapporto dei due numeri inseriti è: %d\n", moltiplicazione);

    return 0;
}