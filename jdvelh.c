#include <stdio.h>
#include <stdlib.h>

int main(){
  int choix = 0;
   
            printf ("\n Que faites vous ?"
            "\n\n  1.Vous allez a gauche"
            "\n  2.Vous allez a droite\n\n");
            scanf ("%ld", &choix);
   
   
 
    
		if (choix==1)
		{
            printf ("\n Vous avez atteint le couloir de gauche");
        }
       
		else if (choix==2)
		{
            printf ("\n Vous avez atteint la salle de droite");
        }
    
    printf("\n");
    return 0;
}