#include <stdio.h>

int main(int argc, char *argv[])
{
    int a,b,c, diff, cntP,cntD,cntN;
    do
    {
    printf("==Inserisci il valore di a==");
    scanf("%d", &a);
    printf("==Inserisci il valore di b==");
    scanf("%d", &b);
    printf("==Inserisci il valore di c==");
    scanf("%d", &c);
    diff=a-b;
    if(diff%2==0)
        cntP++;
    else if(diff==0)  
        cntN++;
    else
        cntD++;
    }while(a+b<c);
    return 0;

}