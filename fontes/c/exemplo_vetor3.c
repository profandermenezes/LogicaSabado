#include<stdio.h>

int main() {

    float notas[4];
    float nota_atual;

    int i = 0;

    while(i < 4) {
        printf("Digite a nota: ");
        scanf("%f", &nota_atual);

        if( (nota_atual >= 0) && (nota_atual <= 10) ) {

            notas[i] = nota_atual;
            i = i + 1;

        } else {

            printf("A nota informada e invalida. Digite novamente.\n");

        }

    }

    float media, soma = 0;

    // Apenas inicializamos a variavel i pq ela já foi declarada anteriormente
    for(i = 0; i < 4; i = i + 1) {
        soma = soma + notas[i];
    }

    media = soma / 4;

    for(i = 0; i < 4; i = i + 1) {
        printf("Nota %d = %.2f\n", i + 1, notas[i]);
    }

    printf("A media eh: %.2f\n", media);

    if(media >= 7) {
        printf("Aluno aprovado");
    } else {
        printf("Aluno reprovado");
    }

    return 0;
}







