#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[])
{
    int giorno,mese,anno, data;
    
    data=atoi(argv[1]);
    giorno=data/1000000;
    if(giorno>31)
    {
      return 0;}
    mese=(data/10000)-giorno*100;
    if(mese>12){
        return 0;}
    anno=data%10000;
    if(anno>2022){
        return 0;}
    printf("La data inserita è %d ", giorno);
    printf("%d ", mese);
    printf("%d \n", anno);
    return 0;
}