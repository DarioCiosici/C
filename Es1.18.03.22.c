#include <stdio.h>

int main(int argc, char *argv[])
{
    int x,cnt=0,media=0;
    int numeri[cnt];
    do{
        printf("Inserisci i numeri");
        scanf("%d",&x);
        if(x!=0){
            numeri[cnt]=x;
            cnt++;
        }
    }while(x!=0);
    for(int i=0;i<cnt;i++)
    {
        media=media+numeri[i];
    }
    media=media/cnt;
    printf("La media è %d\n", media);
    for(int i=0;i<cnt;i++)
    {
        if(numeri[i]>media)
            printf("%d\n",numeri[i]);
    }
    return 0;

}