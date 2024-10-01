#include <stdio.h>

int main()
{
    int a,b = 1;
    printf("digite um numero:\n");
    scanf("%i", &a);
    for(int i = 1; i <= a; i++){
        b = b * i;
    }
    printf("%i fatorial eh: %i",a, b);
    return 0;
}