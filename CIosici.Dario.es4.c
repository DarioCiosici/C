#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
double a, b, rapp,rad;
do{
printf("==Inserisci valore di a==");
scanf("%lf", &a);
printf("==Inserisci valore di b==");
scanf("%lf", &b);
if(a<b)
    rapp=b/a;
else
    rapp=b/a;
if(rapp>0)
{
    rad=sqrt(rapp);
    printf("==La radice vale %f\n\n", rad);
}
}
while(rapp>0);
printf("==Non é possibile fare la radice di un numero negativo==\n\n");

return 0;
}