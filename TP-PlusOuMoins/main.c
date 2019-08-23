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
    
    int nombreEntree = 0;
    
    while(nombreMystere != nombreEntree){
        printf("Quel est le nombre ? ");
        scanf("%d", &nombreEntree);
        
        if(nombreMystere > nombreEntree) {
            printf("C'est plus !\n\n");
        }
        else if (nombreMystere < nombreEntree) {
            printf("C'est moins !\n\n");
        }
    }
    
    printf("Bravo, vous avez trouve le nombre mystère !!!\n\n");
    
    
    return 0;
}
