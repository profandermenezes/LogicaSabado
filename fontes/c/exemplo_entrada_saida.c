// biblioteca padrão de entrada e saída
// Standard Input and Output
#include<stdio.h>

int main() {

    // escreva(valor) -> saída
    //printf("%s", "Olá, mundo!");

    int idade = 19;

    // escreva(idade)
    //printf("%d\n", idade);

    // hard coded
    //float salario = 300.50;

    //printf("%f", salario);
    //printf("\tO salario %.2f e o valor base para qualquer funcionario", salario);


    // leia(variavel) -> entrada
    //scanf();

    float salario;

    printf("Digite o salario base: ");
    scanf("%f", &salario);

    printf("O salario %.2f e o valor base para qualquer funcionario", salario);

    /*
        Como a linguagem C não possui um tipo específico para as Strings,
        precisamos utilizar vetor de caracteres.
    */
    char nome[50];

    printf("\nDigite seu nome: ");
    scanf("%s", &nome);

    printf("O nome do funcionario e %s", nome);

    return 0;
}
