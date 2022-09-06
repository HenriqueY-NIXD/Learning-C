#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define qt_numero_sorteado 3

int main() {
    setlocale(LC_ALL, "");
    char nome[25];
    printf("Digite o seu nome: ");
    fflush(stdin);
    scanf("%s", nome);
    unsigned int numero_escolhido = 0;
    unsigned int numero_sorteado [qt_numero_sorteado] = {10,50,80};
    printf("Hello World! \nDescubra qual é o número sorteado!!!!!!!\n");

    scanf("%u", &numero_escolhido);
    printf("\nNúmero escolhido foi: \"%u\".\n", numero_escolhido);
    int parar = 0;
    while(parar == 0){
        for(int i2 = 0; i2 < qt_numero_sorteado; i2++) {
            if (numero_escolhido == numero_sorteado[i2]) {
                    printf("%i", numero_sorteado[i2]);
                for(int i = 1; i <= 5; i++){
                    printf("\n%i - %s Acertou!\n", i, nome);
                    parar = 1;
                }
                break;
            }
        }
        if (parar == 0) {
            printf("\nErrou\nDigite outro número: ");
            scanf("%u", &numero_escolhido);
        }
    }
    return 0;
}
