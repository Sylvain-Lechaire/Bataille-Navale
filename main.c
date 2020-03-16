/*/
 * projet: bataille navale
 * auteur: Sylvain Léchaire
 * version: 0.1
 * date de dernière modification 13.03.2020
 */
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

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
    system("cls");
    switch (menu) {
        case 1:
            system("cls");
            printf("demarrer le jeu\n");
            //afficher la grille
            /*/
             * infos: 0= case vide 1= bateau présent 2: endroit touché mais raté 3= bateau touché 4=touché coulé
             */

            //affiche le tableau et implémente les valeures
            int tableau [10] [10];
            for (int j = 0; j <= 9 ; ++j) {
                printf("\n");
                for (int i = 0; i <= 9 ; ++i) {
                    tableau [i] [j] = 0;
                printf("%d  ", tableau[i] [j]);
                }

            }
            printf("\n");
           // printf("  A  B  C  D  E  F  G  H  I  J  \n"
                 //  "1 |-||-||-||-||-||-||-||-||-||-|\n"
                   //"2 |-||-||-||-||-||-||-||-||-||-|\n"
                   //"3 |-||-||-||-||-||-||-||-||-||-|\n"
                   //"4 |-||-||-||-||-||-||-||-||-||-|\n"
                   //"5 |-||-||-||-||-||-||-||-||-||-|\n"
                   //"6 |-||-||-||-||-||-||-||-||-||-|\n"
                   //"7 |-||-||-||-||-||-||-||-||-||-|\n"
                   //"8 |-||-||-||-||-||-||-||-||-||-|\n"
                   //"9 |-||-||-||-||-||-||-||-||-||-|\n"
                   //"10|-||-||-||-||-||-||-||-||-||-|\n");


            //placer les bateaux
            //porte avions
            for (int i = 0; i < 4 ; ++i) {
                tableau [0] [i] = 1;
                printf("%d", tableau [0] [i]);
            }
            for (int k = 0; k <= 9 ; ++k) {
                printf("%d \n", tableau [k] [k]);

            }


            break;
        case 2:
            do {
                system("cls");
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