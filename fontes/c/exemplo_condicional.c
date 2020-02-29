#include<stdio.h>

int main() {

    /*
        se(condicao) {

        }
        senao {

        }
    */

    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if(idade >= 18){
        printf("O usuario eh di maior");
    }
    else {
        printf("O usuario eh di menor");
    }


    return 0;
}
