#include "biblioteca.h"
#include <stdio.h>

int main() {
    int soma;

    soma = acharSomaFibonacci(1000000);
    printf ("Soma: %d\n", soma);
    return 0;
}
