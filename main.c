#include <stdio.h>

int main() {
    int menu;
printf("bataille navale \n");
printf ("bonjour, bienvenue sur la bataille navale, choissiez une des options si dessous");
printf("1 demarrer le jeu");
printf("2 afficher l'aide");
printf("3 sortir du programme");
scanf("%d", &menu);
if (menu>3)
    printf("erreur chiffre trop grand");

switch (menu)
    {
        case 1:
            printf("demarrer le jeu");
        break;
    }



    return 0;
}