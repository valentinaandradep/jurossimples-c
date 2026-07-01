#include <stdio.h>
#include <assert.h>
#include <math.h>

float jurossimples(float c, float i, float t);

int main(void) {
    assert(fabs(jurossimples(100, 0.5, 10) - 500.0) < 0.01);
    assert(fabs(jurossimples(100, 0.25, 12) - 300.0) < 0.01);
    assert(fabs(jurossimples(100, 0.75, 5) - 375.0) < 0.01);

    printf("Todos os testes passaram!\n");
    printf("Criado por Valentina Andrade");

    return 0;
}
