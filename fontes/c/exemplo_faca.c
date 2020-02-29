#include<stdio.h>

int main() {

    /*
        enquanto(condicao) {
            logica
        }
    */

    /*
        Faça-Enquanto

        faca{

            logica

        } enquanto(condicao)
    */

    int contador = 5;

    // Sempre executa pelo menos 1 vez
    do {

        printf("%d ", contador);
        contador = contador - 1;

    } while(contador > 50);

    return 0;
}



