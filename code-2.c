#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*
    O programa vai Receber 4 fones e irá printa-los.
*/

#define MAX_FONE_LENGTH 45
#define MAX_MARCA_LENGTH 45
#define MAX_TIPO_LENGTH 20

struct Fone {
    char nome[MAX_FONE_LENGTH];
    int tipo_id;
    int marca_id;
};

struct Marca {
    int id;
    char nome[MAX_MARCA_LENGTH];
};

struct Tipo {
    int id;
    char nome[MAX_TIPO_LENGTH];
};

int main() {
    setlocale(LC_ALL, "");

    const struct Marca marcas[6] = {
        { 1, "SONY"},
        { 2, "AKG"},
        { 3, "JBL"},
        { 4, "KZ"},
        { 5, "PHILIPS"},
        { 6, "KUBA"},
    };
    const struct Tipo tipos[3] = {
        { 1, "INTRA-AURICULAR"},
        { 2, "OVER-EAR"},
        { 3, "HEADPHONE"},
    };
    struct Fone fone[4];
    for(int i = 0; i < 4; i++){
        printf("Digite o nome do %iº fone: ", i+1);
        fflush(stdin);
        fgets(fone[i].nome, MAX_FONE_LENGTH, stdin);

        int digitou_correto = 0;
        printf("\nDigite o código do tipo do %iº fone: ", i+1);
        while(digitou_correto == 0){
            scanf("%i", &fone[i].tipo_id);
            if (fone[i].tipo_id < 1 || fone[i].tipo_id > 3)
                printf("\nO código que você inseriu não existe, digite outro código do tipo do %iº fone: ", i+1);
            else
                digitou_correto = 1;
        }
        digitou_correto = 0;
        printf("\nDigite o código da marca do %iº fone: ", i+1);
        while(digitou_correto == 0){
            scanf("%i", &fone[i].marca_id);
            if (fone[i].marca_id < 1 || fone[i].marca_id > 6)
                printf("\nO código que você inseriu não existe, digite outro código da marca do %iº fone: ", i+1);
            else
                digitou_correto = 1;
        }
    }
    printf("\nFones: ");
    printf("\n-----------------------------\n");
    for (int i = 0; i < 4; i++) {
        printf("%iº - Fone: {", i+1);
        printf("\n\tnome: %s", fone[i].nome);
        for(int index_tipos = 0; index_tipos < 3; index_tipos++) {
            if (tipos[index_tipos].id == fone[i].tipo_id) {
                printf("\n\ttipo: %s", tipos[index_tipos].nome);
            }
        }
        for(int index_marcas = 0; index_marcas < 6; index_marcas++) {
            if (marcas[index_marcas].id == fone[i].marca_id) {
                printf("\n\tmarca: %s", marcas[index_marcas].nome);
            }
        }
        printf("\n}\n");
    }
    printf("\n-----------------------------\n");
    return 0;
}
