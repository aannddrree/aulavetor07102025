#include <stdio.h>

int main (){

    int numero[4] = { 2, 5, 3, 10};
    int maior = numero[0];

    for (int i = 0; i < 4; i++)
    {
        if (numero[i] > maior){
            maior = numero[i];
        }
    }

    printf("O maior e %d", maior);

    return 0;
}