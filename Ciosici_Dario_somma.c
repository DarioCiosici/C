#include <stdio.h>

int main(int argc, char *argv[])
{
int a, b, somma;
do{
printf("==Inserisci valore di a, maggiore di 0==");
scanf("%d", &a);
}while(a<0);
do{
printf("==Inserisci valore di b, maggiore di 0==");
scanf("%d", &b);
}while(b<0);

somma=a+b;
printf("==La somma è %d\n", somma);

return 0;
}