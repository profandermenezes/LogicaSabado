#include<stdio.h>

int main() {

    /*
        enquanto(condicao) {

            ...
            ...
            ...
            ...
            ...
            ...
            ...

        }
    */
    /*
    while(10 > 0) {
        printf("Adoro programacao!!!");
    }
    */

    int contador = 0;

    while(contador < 10) {
        printf("Adoro programacao!!!\n");
        //incremento no contador
        contador = contador + 1;
    }

    while(contador > 0){
        printf("%d ", contador);
        contador = contador - 1;
    }

    /*

    while(contador < 100) {

        if(salario > 1500) {
            calculo do salario
        } else {
            calculo do salario
        }

    }

    */

    return 0;
}








