#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "");

    /*int numero = 35;
    int *ponteiro_numero;
    ponteiro_numero = &numero;
    int numero2 = *ponteiro_numero;

    printf("%p\n", ponteiro_numero);
    printf("%i\n", *ponteiro_numero);
    printf("%p\n", &ponteiro_numero);*/
    //printf("%p\n", ponteiro_numero2);

    int numero = 35, *ponteiro1, **ponteiro2;
    ponteiro1 = &numero;
    ponteiro2 = &ponteiro1;

    printf("%p\n", ponteiro1);
    printf("%p\n", ponteiro2);
    printf("%p\n", &ponteiro1);
    printf("%p\n", &ponteiro2);
    printf("%i\n", *ponteiro1);
    printf("%i\n", **ponteiro2);
    return 0;
}
