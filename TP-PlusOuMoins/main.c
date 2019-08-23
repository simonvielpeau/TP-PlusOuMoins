//
//  main.c
//  TP-PlusOuMoins
//
//  Created by Simon Vielpeau on 23/08/2019.
//  Copyright © 2019 Simon Vielpeau. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) // Équivalent de int main()
{
    srand(time(NULL));
    
    int continuerPartie = 1;
    
    while (continuerPartie == 1) {
        const int MAX = 100, MIN = 1;
        int nombreMystere = 0;
        
        nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
        
        int nombreEntre = 0;
        int coups = 0;
        
        for(coups = 0; nombreMystere != nombreEntre; coups++){
            printf("Quel est le nombre ? ");
            scanf("%d", &nombreEntre);
            
            if(nombreMystere > nombreEntre) {
                printf("C'est plus !\n\n");
            }
            else if (nombreMystere < nombreEntre) {
                printf("C'est moins !\n\n");
            }
        }
        
        printf("\nFélicitations ! Vous avez trouvé le nombre mystère en %d coups !\n\n", coups);
        
        do {
            printf("Voulez-vous faire une nouvelle partie ?\n");
            printf("Veuillez répondre par 1 (oui), ou par 2 (non)\n");
            scanf("%d", &continuerPartie);
            
            switch (continuerPartie) {
                case 1:
                    printf("\nC'est parti pour une nouvelle tentative !\n\n");
                    break;
                case 2:
                    printf("\nD'accord, arrêtons-nous là !\n\n");
                    break;
                default:
                    printf("Vous devez soit répondre par 1 (oui), ou par 2 (non)");
                    break;
            }
        } while (continuerPartie != 1 && continuerPartie != 2);
    }
    
   
    
    return 0;
}
