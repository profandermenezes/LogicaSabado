#include<stdio.h>

int main() {

    float nota[10];

    for(int i = 0; i < 10; i = i + 1) {

        printf("Digite a nota: ");
        scanf("%f", &nota[i]);

    }

    for(int i = 0; i < 10; i = i + 1) {
        printf("Nota %d = %.2f\n", i+1, nota[i]);
    }

    return 0;
}
