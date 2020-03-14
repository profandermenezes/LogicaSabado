#include<stdio.h>

int main() {

    /*
        É possível inicializarmos um vetor passando seus
        valores entre chaves. A quantidade de valores passada
        será o tamanho do vetor declarado.
    */
    int a[] = {1, 0, 5, -2, -5, 7};

    int soma = a[0] + a[1] + a[5];

    printf("A soma eh %d\n", soma);

    a[4] = 100;

                          /*i = i + 1*/
    for(int i = 0; i < 6; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
