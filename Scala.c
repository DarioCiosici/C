#include <stdio.h>

int main()
{
    int n;
    printf("inserisci il valore di n");
    scanf("%d", &n);
    for (int i = n; i > 0; i--)
    {
        printf(" %d", i);
    }
    printf("\n");
    return 0;
}