#include <stdio.h>

#include <limits.h>
#define DIM SHRT_MAX

int ricerca(int array[], int x)
{
    int numero;
    printf("inserisci il numero da ricercare\n");
    scanf("%d", &numero);
    for (int i = 0; i < x; i++)
    {
        if (array[i] == numero)
            return i + 1;
    }
    return -1;
}
void visualizza(int array[], int *x)
{
    for (int i = 0; i < *x; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}
void inserisci(int array[], int *x)
{
    int numero;
    printf("inserisci il numero che vuoi inserire\n");
    scanf("%d", &numero);
    array[*x+1] = numero;
    printf("Numero inserito in %d\n", *x);
    
}
void modifica(int array[], int x)
{
    int numero, posizione;
    printf("Inserisci l'elemento che vuoi modifcare, disponibile fino a %d\n", x);
    scanf("%d", &posizione);
    printf("Inserisci il nuovo numero\n");
    scanf("%d", &numero);
    array[posizione] = numero;
}
void elimina(int array[], int *x)
{
    int posizione;
    printf("Inserisci l'elemento che vuoi eliminare, disponibile fino a %d\n", *x);
    scanf("%d", &posizione);
    for (int i = posizione; i < *x - 1; i++)
    {
        array[i] = array[i + 1];
    }
    array[*x] = 0;
}
void visualizzaInv(int array[], int x)
{
    for (int i = *x; i >=0; i--)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}
void inserisciPos(int array[]int x)     //difficolta nel mandare indietro l'array
{
    int pos,numero;
    printf("Inserisci il numero da inserire\n");
    scanf("%d", numero);
    printf("Inserisci dove vuoi inserirlo\n");
    scanf("%d",pos);
    int tmp=array[pos+1];
    for(int i=pos;i<x;i++)
    {
        int tmp1;
      
        array[]


    }
}
int main(int argc, char *argv[])
{
    int numeri[DIM];
    int scelta, x = 0, risp;
    do
    {
        printf("Inserisci una serie di numeri, mettere -1 per procedere\n");
        scanf("%d", &scelta);
        if (scelta > 0)
        {
            numeri[x] = scelta;
            x++;
        }
    } while (scelta > -1);

    do
    {
        printf("premere 1 per mostrare il contenuto dell'array\n");
        printf("premere 2 per inserire un elemento\n");
        printf("premere 3 per modificare un elemento\n");
        printf("premere 4 per eliminare un elemento\n");
        printf("premere 5 per ricercare un elemento\n");
        printf("premere 6 per visualizzare l'array al contrario\n");
        printf("premere 7 per inserire un numero in una posizione");
        printf("premere 0 per terminare\n");
        scanf("%d", &scelta);
        if (scelta == 1)
            visualizza(numeri, &x);
        else if (scelta == 2)
        {
            inserisci(numeri, &x);
            x++;
        }
        else if (scelta == 3)
            modifica(numeri, x);
        else if (scelta == 4)
            elimina(numeri, &x);
        else if (scelta == 5)
        {
            risp = ricerca(numeri, x);
            if (risp != -1)
                printf("In numero si trova in posizione %d\n", risp);
        }
        else if(scelta==6)
            visualizzaInv(numeri, &x);
        else if(scelta==7)
            inserisciPos(numeri);
    } while (scelta > 0);
    return 0;
}