#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    long choix = 0;
    long vie = 10;
   
    printf (" jeu dont vous etes le heros\n\n"
    " Acceptez-vous cette Mission ?\n\n  1.Oui\n  2.Non\n\n", vie);
    scanf ("%ld", &choix);
   
    switch(choix)
    {
        case 1:
            printf ("\n Que faites vous ?"
            "\n\n  1.Vous allez a gauche"
            "\n  2.Vous allez a droite\n\n");
            scanf ("%ld", &choix);
            break;
   
        case 2:
            printf ("\n Au Revoir alors !!!\n\n");
            choix = 0;
            break;
    }
   
    switch(choix)
    {
        case 1:
            printf ("\n Vous avez atteint le couloir de gauche");
            break;
       
        case 2:
            printf ("\n Vous avez atteint la salle de droite");
            break;
    }
    printf("\n");
    system("PAUSE");
    return 0;
}