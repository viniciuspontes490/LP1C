#include <stdio.h>

int main()
{
    int primo, ver = 0;
    printf("digite um numero e vou verificar se ele eh primo ou nao\n");
    scanf("%i", &primo);
    for (int i = 1; i <= primo; i++)
    {
        if (primo % i == 0)
        {
            ver = ver + 1;
        }
    }
    if (ver > 2)
    {
        printf("numero nao eh primo");
    }
    else
    {
        printf("numero primo");
    }
    return 0;
}