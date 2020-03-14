#include<stdio.h>

int main() {

    int somatorio = 0;

    for(int num = 1; num <= 1000; num++) {
        //somatorio += num;
        somatorio = somatorio + num;
    }

    printf("%d", somatorio);

    return 0;
}
