#include <stdio.h>
#include <math.h>
/*Progettare un algoritmo che risolve il seguente problema. Si desidera 
calcolare la somma delle radici quadrate di N valori numerici inseriti 
dall’utente. 
L’algoritmo deve stampare la somma calcolata. L’algoritmo deve terminare
con un messaggio di errore quando viene inserito un numero che non
permette di effettuare il calcolo (nel dominio dei numeri reali).*/

int main()
{
    int valore;
    double radd, somma;
    do
    {
        printf("==Inserisci il numero==");
        scanf("%d", &valore);
        if (valore > 0)
        {
            radd = sqrt(valore);
            somma = somma + radd;
            printf("==La somma è %f\n\n", somma);
        }
    } while (valore > 0);
    printf("==Non è possibile farela radice di un numero negativo==\n");
    return 0;
}