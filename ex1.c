#include <stdio.h>

int main(){
    int numero[5] = { 1, 2, 3, 4, 5 };
    
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", numero[i]);
    }

    printf("\nEu quero imprimir a posicao 2 do meu vetor: %d", numero[2]);
    return 0;
}