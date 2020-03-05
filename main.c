#include <stdio.h>

int main() {
    int menu;
printf("bataille navale \n");
printf ("bonjour, bienvenue sur la bataille navale, choissiez une des options si dessous\n");
do {
    printf("1 demarrer le jeu\n");
    printf("2 afficher l'aide\n");
    printf("3 sortir du programme\n");
    scanf("%d", &menu);
    if (menu > 3)
        printf("erreur chiffre trop grand\n");

    switch (menu) {
        case 1:
            printf("demarrer le jeu\n");
            break;
        case 2:
            printf("aide\n");
            char aide;
            aide = "a";
            printf("%c", aide);
            break;
    }

}while(menu>3);

    return 0;
}