#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int menu;
    int aide;
    int axeX;
    int axeY;
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
            //afficher la grille
            /*/
             * infos: 1= bateau présent 2: endroit touché mais raté 3= bateau touché 4=touché coulé
             */
            printf("  A  B  C  D  E  F  G  H  I  J  \n"
                   "1 |-||-||-||-||-||-||-||-||-||-|\n"
                   "2 |-||-||-||-||-||-||-||-||-||-|\n"
                   "3 |-||-||-||-||-||-||-||-||-||-|\n"
                   "4 |-||-||-||-||-||-||-||-||-||-|\n"
                   "5 |-||-||-||-||-||-||-||-||-||-|\n"
                   "6 |-||-||-||-||-||-||-||-||-||-|\n"
                   "7 |-||-||-||-||-||-||-||-||-||-|\n"
                   "8 |-||-||-||-||-||-||-||-||-||-|\n"
                   "9 |-||-||-||-||-||-||-||-||-||-|\n"
                   "10|-||-||-||-||-||-||-||-||-||-|\n");
            int tableau [10][10];
            //placer les bateaux
            //porte avions
            for (int i = 0; i < 3 ; ++i) {
                tableau [0] [i] = 1;
                printf("%d", tableau [0] [i]);
            }


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