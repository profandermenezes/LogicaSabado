#include<stdio.h>

int main() {

    int contador = 255;

    while(contador <= 426) {

        printf("%d ", contador);

        if(contador >= 300 && contador <= 400) {

            //contador = contador + 3;
            contador += 3;

        } else {

            //contador = contador + 5;
            contador += 5;

        }
    }

    return 0;
}
