#include<stdio.h>

int main() {

    // Declaração do vetor
    float nota[10];

    nota[0] = 7.5;
    nota[8] = 10;
    nota[3] = 8;

    printf("Digite a nota: ");
    scanf("%f", &nota[5]);

    printf("A quarta nota eh %f", nota[3]);

    return 0;
}
