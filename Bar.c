#include <stdio.h>
#include <string.h>
int main()
{
    char string[12];
    int bevande, ristorazione, imp, impB, impR;
    do
    {
        printf("Inserisci il tipo di consumazione");
        scanf("%s", &string[12]);
        printf("inserisci l'importo");
        scanf("%d",&imp);
        if (strcmp(string, "bevanda"))
        {
            bevande++;
            impB = impB + imp;
        }
        if (strcmp(string, "ristorazione"))
        {
            ristorazione++;
            impR = impR + imp;
        }
    } while (strcmp(string, "esci"));
    printf("La media dell'incasso delle bevande è %d", impB / bevande);
    printf("La media dell'incasso della ristorazione è %d", impR / ristorazione);
    if (bevande > ristorazione)
    {
        printf("sono state vendute più bevande");
    }
    else
    {
        printf("sono state vendute più ristorazione");
    }
    return 0;
}