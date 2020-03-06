#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int menu;
    int aide;
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
            do {
                printf("aide\n");
                printf("principe du jeux: vous possédez les navires suivants \n");
                printf("1 portes avions qui prends 5 cases\n");
                printf("1 croiseur qui prends 4 cases\n");
                printf("2 contre-torpilleurs qui prends 3 cases\n");
                printf("1 torpilleur qui prends 2 cases\n");

                printf("but du jeux\n");
                printf("le but du jeu et de placer vos bateaux, chercher de couler les bateau de l'ennemi\n");
                printf("en ciblant un case, comme b2 par exemple\n");

                printf("\n"); //espace
                printf("appuyez sur 5 pour sortir de l'aide\n");
                scanf("%d",&aide);
            }while(aide != 5);




    }

}while(menu!=3);

    return 0;
}