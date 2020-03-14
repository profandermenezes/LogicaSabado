#include<stdio.h>

int main() {

    int n;

    printf("Que fatorial deseja calcular? ");
    scanf("%d", &n);

    int fatorial = 1;

    while(n >= 1) {
        // fatorial = fatorial * n;
        fatorial *= n;

        // n = n - 1;
        n--;
    }

    printf("O fatorial eh %d", fatorial);

    return 0;
}
