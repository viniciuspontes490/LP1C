#include <stdio.h>

int main()
{
    int arr[5],soma=0;
    for (int i = 0; i < 5; i++)
    {
        printf("digite o elemento %i do array: \n", i);
        scanf("%i", &arr[i]);
        soma = soma + arr[i];
    }
    printf("a soma de todos os elementos desse array eh: %i", soma);
    return 0;
}