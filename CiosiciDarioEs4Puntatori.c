#include <stdio.h>
#include <stdlib.h>
#include <limit.h>
int ricerca(int array[],int x)
{
    int numero;
    printf("inserisci il numero da ricercare");
    scanf("%d",numero);
    for(int i=0;i<x;i++)
    {
        if(array[i]==numero)
            return i+1;
    }
    return -1;
}
void visualizza(int array[],int x)
{
    for(int i=0;i<x;i++)
    {
        printf("%d",array[i]);
    }
    printf("\n");
}
void inserisci(int array[],int x)
{
    int numero;
    printf("inserisci il numero che vuoi inserire");
    scanf("%d",numero);
    array[x]=numero;
    printf("Numero inserito in %d",x);
    x++;

}
void modifica(int array[], int x)
{
    int numero,posizione;
    printf("Inserisci l'elemento che vuoi modifcare, disponibile fino a %d",x);
    scanf("%d",posizione);
    printf("Inserisci il nuovo numero");
    scanf("%d", numero);
    array[posizione]=numero;
}
void elimina(array[],int x)
{
    int posizione;
    printf("Inserisci l'elemento che vuoi eliminare, disponibile fino a %d",x);
    scanf("%d",posizione);
    for(int i=posizione;i<x-1;i++)
    {
        array[i]=array[i+1];
    }
    array[x]=0;
}
int main(int argc,char *argv[])
{
    int numeri[INT_MAX];
    int scelta,x=0,risp;
    do
    {
    printf("Inserisci una serie di numeri, mettere -1 per procedere");
    scanf("%d",scelta);
    if(scelta!=-1)
    {
        numeri[x]=scelta;
        x++;
    }
    }while(scelta!=-1);
    
    do
    {
        printf("premere 1 per mostrare il contenuto dell'array\n");
	    printf("premere 2 per inserire un elemento\n");
	    printf("premere 3 per modificare un elemento\n");
	    printf("premere 4 per eliminare un elemento\n");
	    printf("premere 5 per ricercare un elemento\n");
	    printf("premere 0 per terminare"\n);
        scanf("%d",scelta);
        if(scelta==1)
            ricerca(numeri[],x);
        else if(scelta==2)
            inserisci(numeri[],x);
        else if(scelta==3)
            modifica(numeri[],x);
        else if(scelta==4)
            elimina(numeri[],x);
        else if(scelta==5)
        {
            risp=ricerca(numeri[],x);
            if(risp!=-1)
                printf("In numero si trova in posizione %d", risp);
        }
    }while(scelta!=0);
    return 0;
}