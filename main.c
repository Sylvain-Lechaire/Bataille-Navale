#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
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
           printf(" principe :La bataille navale, appelée aussi touché-coulé, est un jeu de société dans lequel deux joueurs doivent placer des « navires » sur"
                  " une grille tenue secrète et tenter de « toucher » les navires adverses. Le gagnant est celui qui parvient à couler tous les navires"
                  " de l'adversaire avant que tous les siens ne le soient. On dit qu'un navire est coulé si chacune de ses cases a été touchées par un coup de l'adversaire.\n"
                  "\n"
                  "Le principe du jeu de bataille navale semble trouver son origine dans le jeu français L'Attaque1 lors de la Première Guerre mondiale. On a"
                  " aussi trouvé des liens de parenté avec le jeu de E. I. Horseman en 1890 (Baslinda2) et on dit que des officiers russes y auraient joué antérieurement"
                  " à la première guerre3. La première version commerciale du jeu fut publiée en 1931 par la Starex Novelty Co. sous le nom de Salvo4. Ce jeu est devenu"
                  " populaire lors de son apparition en 1943 dans les publications américaines de divertissement de la Milton Bradley Company qui l'exploita sous la forme "
                  "papier jusqu'en 1967, où elle sortit un jeu de plateau5, puis en réalisa une version électronique en 1977.\n");
                    printf("règles: La bataille navale oppose deux joueurs qui s'affrontent."
                           " Chacun a une flotte composée de 5 bateaux, qui sont, en général,"
                           " les suivants : 1 porte-avion (5 cases), 1 croiseur (4 cases), "
                           "1 contre-torpilleur (3 cases), 1 sous-marin (3 cases), 1 torpilleur"
                           " (2 cases).Les bateaux ne doivent pas être collés entre eux. Au début du jeu,"
                           " chaque joueur place ses bateaux sur sa grille. Celle-ci est toujours numérotée de"
                           " 1 à 10 verticalement et de A à J horizontalement. Un à un, les joueurs vont \"tirer\""
                           " sur une case de l'adversaire : par exemple, B.3 ou encore H.8. Le but est donc de couler"
                           " les bateaux adverses. Au fur et à mesure, il faut mettre les pions sur sa propre grille"
                           " afin de se souvenir de ses tirs passés.[réf. nécessaire]\n"
                           "\n"
                           "Un fonctionnement plus sophistiqué mettant en œuvre de la stratégie est de tirer une "
                           "salve (trois coups par exemple) et de donner le résultat global de la salve.");
    }

}while(menu>3);

    return 0;
}