#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define DIM 50

int vocali(char stringa[])
{
    int cnt=0;
    for(int i=0;i<strlen(stringa);i++)
        if(toupper(stringa[i])=='A'||toupper(stringa[i])=='E'||toupper(stringa[i])=='I'||toupper(stringa[i])=='O'||toupper(stringa[i])=='U');
            cnt++;
    return cnt;
}
int cerca(char stringa[],char c)
{
    int cnt=0;
    for(int i=0;i<strlen(stringa);i++)
        if(stringa[i]==c)
    cnt++;
}
int doppie(char stringa[])
{
    for(int i=0;i<strlen(stringa)-1;i++)
        if(stringa[i]==stringa[i++])
            return 1;
    return -1;
}
int main(int argc, char *argv[])
{
    char parola[DIM];
    int n;
    char c;
    while (1) 
    {
        printf("Inserisci la parola\n");
        scanf("%s",parola);
        if(strcmp(parola,"esci")==0)
            return 0;
        n=vocali(parola);
        printf("La stringa contiene %d vocali e %ld consonanti\n",n,strlen(parola)-n);
        printf("Digita la lettera da ricercare\n");
        scanf("%c",&c);
        printf("La lettera %c appare %d volte\n",c,cerca(parola,c));
        if(doppie(parola)!=-1)
            printf("Non sono presenti doppie\n");
        else
            printf("Sono presenti doppie\n");
    }
}
