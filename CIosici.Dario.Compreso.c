#include <stdio.h>
int main()
{
    int N1, N2;
    printf("==Inserisci due valori, in modo che il secondo sia maggiore del primo==\n");
    scanf("%d", &N1);
    scanf("%d", &N2);
    
    while(N1<0||N2<0&&N2<N1)
    {
    	printf("==Valori non validi, inseriscili di nuovo==\n");
        scanf("%d", &N1);
        scanf("%d", &N2);
    }
	
    for (int i = N1; i < N2; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}
