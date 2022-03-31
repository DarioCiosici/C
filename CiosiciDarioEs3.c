#include <stdio.h>
#include <stdlib.h>
int ricerca(int argc,int num,char *argv[])
{
    
    for(int j=1;j<argc;j++)
    {
        if(num==atoi(argv[j]))
            return j;
    }
    return -1;
}

int main(int argc,char *argv[])
{
    int num, ris=0;
    printf("Inserisci il numero che vuoi cercare\n");
    scanf("%d",&num);
    ris=ricerca(argc,num,argv);
   
    if(ris>0)
        printf("Il numero si trova in posizione %d\n", ris);
    else 
        printf("numero non presente\n");
    return 0;
}