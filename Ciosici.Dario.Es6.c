#include <stdio.h>
/*Progettare un algoritmo che effettui le seguenti operazioni:
• legga da tastiera una coppia di valori interi A e B con A<B;
• continui a leggere da tastiera una serie di valori interi, terminando 
quando il valore letto è al di fuori dell’intervallo [A, B];
• conteggi la media dei valori letti;
• prima di terminare, stampi il valore calcolato.*/
int main(int argc, char *argv[])
{
    int a,b,cntN,valore,;
    double media=0;
    do{
    printf("==Inserisci il valore di a==")
    scanf("%d", &a);
    printf("==Inserisci il valore di b==");
    scanf("%d", &b);
    }while(a<B)
    do
    {
    printf("==Inserisci dei valori, metterne maggiori ad a o minori di b per uscire==")
    scanf("%d",&valore);
    media=media+valore;
    cntN++;
    }while(valore<b&&valore>a);
    media=media/cntN;
    printf("%d",&media);
}