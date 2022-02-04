#include <stdio.h>
#include <math.h>
/*Progettare un algoritmo che risolva il seguente problema. Si richieda 
all’utente di inserire una serie di terne di dati numerici (A, B, C). 
Il programma deve terminare quando uno dei valori inseriti è minore di
zero. Si scartino le terne nelle quali i valori non sono in ordine
strettamente crescente, ovvero quelle terne per cui non valga A < B < C.
Su tutte le terne non scartate si calcoli il massimo e il minimo dei
valori inseriti. Si stampino a video tali valori massimi e minimi prima
di terminare il programma.*/
int main()
{
    int a, b, c, max = 0, min;
    do
    {
        printf("==Inserisci il valore di a==");
        scanf("%d", &a);
        printf("==Inserisci il valore di b==");
        scanf("%d", &b);
        printf("==Inserisci il valore di c==");
        scanf("%d", &c);
        if (a > 0 || b > 0 || c > 0)
        {
            if (a < b < c)
            {
                if (a < min)
                    min = a;
                if (c > max)
                    max = c;
            }
        }
    } while (a > 0 && b > 0 && c > 0);
    printf("==Il valore minore è: %d\n", min);
    printf("==Il valore massimo è: %d\n", max);
    return 0;
}