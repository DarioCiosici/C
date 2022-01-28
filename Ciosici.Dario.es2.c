#include <studio.h>
int main(int argc, char *argv[])
{
int a, b, somma, prod;
do{
printf("==Inserisci valore di a, mettere 0 per uscire==");
scanf("%d", &a);
printf("==Inserisci valore di b, mettere 0 per uscire==");
scanf("%d", &b);
prod=a*b;
printf("==Il prodotto è %d\n", prod);
somma=somma+prod;
}while(a=0&&b=0);
printf("==La somma dei prodotti è %d\n", somma);
return 0;
}