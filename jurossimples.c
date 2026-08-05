#include <stdio.h>
#include <stdlib.h>
#include "function_jurossimples.c"

float jurossimples(float c, float i, float t);

int main(int argc, char *argv[]) {
    float c, i, t, j;
    char saida[100];

    if (argc > 3) {
        c = atof(argv[1]);
        i = atof(argv[2]);
        t = atof(argv[3]);
    } else {
        printf("Digite o capital: ");
        scanf("%f", &c);
        printf("Digite a taxa de juros (decimal): ");
        scanf("%f", &i);
        printf("Digite o tempo: ");
        scanf("%f", &t);
    }

    j = jurossimples(c, i, t);
    sprintf(saida, "O valor dos juros e %.2f\n", j);
    printf("%s", saida);

    }

    FILE *arquivo = fopen("jurossimples.txt", "w");
    if (arquivo != NULL) {
        fprintf(arquivo, "%s", saida);
        fclose(arquivo);
      }
    printf("Criado por Valentina Andrade");

    return 0;
}
