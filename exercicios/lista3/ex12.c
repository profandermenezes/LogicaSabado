#include<stdio.h>

int main() {

    int m, n;

    printf("Digite o valor de m: ");
    scanf("%d", &m);

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    // Declarando uma matriz com m linhas e n colunas
    int matriz[m][n];

    // preenchendo a matriz com os valores do usuário
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("Digite um valor: ");
            scanf("%d", &matriz[i][j]);
        }
    }

    int vetor[m*n];

    // índice do vetor
    int k = 0;

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            vetor[k] = matriz[i][j];
            k++;
        }
    }

    for(int i = 0; i < m*n; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
