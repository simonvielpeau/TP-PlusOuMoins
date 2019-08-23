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
    
    printf("\n\nFélicitations ! Vous avez trouvé le nombre mystère en %d coups !\n\n", coups);
    
    
    return 0;
}
