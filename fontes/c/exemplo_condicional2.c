#include<stdio.h>

int main() {

    /*
        Deseja-se aplicar um aumento de salário para os funcionários. Todos
        os funcionários que receberem mais que R$ 1500.00 terão um aumento
        de 7%; os demais terão um aumento de 12%.
    */

    float salario, salario_atualizado;

    printf("Digite o salario atual: ");
    scanf("%f", &salario);

    if(salario > 1500) {
        // salario_atualizado = salario + 7%;
        float aumento = salario * 0.07;
        salario_atualizado = salario + aumento;
    }
    else {
        float aumento = salario * 0.12;
        salario_atualizado = salario + aumento;
    }

    printf("O salario final eh de R$ %.2f", salario_atualizado);

    return 0;
}





