#include <stdio.h>
#include <string.h>
#define DIM 6

typedef struct
{
    char nome[20];
    char ruolo[20];
    char squadra[20];
} calciatore_t;

void popola(calciatore_t squadra[])
{
    for (int i = 1; i < DIM; i++)
    {
        printf("Inserisci il nome del %d° giocatore\n", i);
        scanf("%s", squadra[i].nome);
        printf("Inserisci il ruolo del %d° giocatore\n", i);
        scanf("%s", squadra[i].ruolo);
        printf("Inserisci il squadra del %d° giocatore\n", i);
        scanf("%s", squadra[i].squadra);
    }
}
void visualizzaMilan(calciatore_t squadra[])
{
    for (int i = 1; i < DIM; i++)
        if (strcmp(squadra[i].squadra, "milan") == 0)
            printf("%s\n", squadra[i].nome);
}
void visualizzaC(calciatore_t squadra[])
{
    for (int i = 1; i < DIM; i++)
        if (squadra[i].nome[0] == 'c')
            printf("%s\n", squadra[i].nome);
}
int main(int argc, char *argv)
{
    calciatore_t squadra[DIM];
    popola(squadra);
    printf("I giocatori del Milan sono:\n");
    visualizzaMilan(squadra);
    printf("I giocatore che iniziano con la C sono:\n");
    visualizzaC(squadra);
}