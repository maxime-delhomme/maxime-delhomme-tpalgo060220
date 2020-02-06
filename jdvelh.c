#include <stdio.h>
#include <stdlib.h>


  struct Chapitre1{
	char description[100];
	int tabChapi[3];
};
  struct Chapitre2{
	char description[100];
	int tabChapi[3];
};
    struct Chapitre3{
	char description[100];
	int tabChapi[3];
};

   int dor = 0;
  int choix = 0;
  int pv = 100;
  int xp = 0;

int main(){

			printf ("\n chapitre1: Vous avez %d dor , %d pv et %d xp",dor, pv, xp);
			printf ("\n Que faites vous ?"
            "\n\n  1.Vous allez a gauche"
            "\n  2.Vous allez a droite\n\n");
            scanf ("%ld", &choix);
   
		if (choix==1)
		{
            printf ("\n Vous avez atteint le couloir de gauche et vous trouvez un sac d'or\n");
			dor +=10;
			printf ("\n + 10 dor !!! \n");
		}
       
		else if (choix==2)
		{
            printf ("\n Vous avez atteint la salle de droite\n");
        }
			
			printf ("\n chapitre2: Vous avez %d dor , %d pv et %d xp",dor, pv, xp);
			printf ("\n Il y a un ennemi devant vous mais il ne vous a pas vu "
            "\n\n  1.Vous l'attaquer"
            "\n  2.Vous lesquivez\n\n");
            scanf ("%ld", &choix);
		
		if (choix==1)
		{
            printf ("\n Vous le tuez ");
			dor +=15;
			xp +=20;
			printf ("\n + 15 dor et + 20 de xp !!\n");
		}
       
		else if (choix==2)
		{
            printf ("\n Vous etes repere ! Vous prenez une baffe mais vous arriver a le semer\n");
			pv -=20;
			xp -= 20;
			printf ("\n - 20 pv et - 20 d'xp \n");
        }
	
			printf ("\n chapitre3: Vous avez %d dor , %d pv et %d xp",dor, pv, xp);
	
	printf("\n");
    return 0;
}