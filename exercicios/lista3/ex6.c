#include<stdio.h>

int main() {

    int x;

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    // != seria não-igual (diferente)
    while(x != 1) {
        printf("%d ", x);

        // se x é par
        if(x % 2 == 0) {

            // x /= 2
            x = x / 2;

        // x é ímpar
        } else {

            x = 3 * x + 1;

        }

    }

    printf("%d", x);

    return 0;
}
