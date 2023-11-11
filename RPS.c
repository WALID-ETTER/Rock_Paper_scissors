#include <stdio.h>  
#include <stdlib.h>  
#include <time.h>
  
int main(void)  
{  
    int usermove , compmove;
    srand(time(NULL));

        while (1)
        {
             printf("Bienvenue au jeux celebre caillousx , papier , sciseaux !\n");
             printf("choisissez un de ces nombre : \t \t pour cailloux : 0\t pour papier : 1\t pour sciseaux : 2\t pour sortir : 9 \t \n");
             scanf("%d",&usermove);

    
           compmove = rand() % 3 ;

            if (usermove == 9)
            {
               exit(1);
        
        
            }else if (usermove == 0 && compmove == 1)
            {
                printf("vous avez perdu ! \t car il a choisie le papier et vous choisisez le cailloux !\n \n ");
            }else if (usermove == 0 && compmove == 2)
            {
                printf("vous avez gagne ! \t car il a choisie les sciseaux et vous choisisez le cailloux !\n \n ");
            }else if (usermove == 1 && compmove == 0)
            {
                printf("vous avez gagne ! \t car il a choisie les cailloux et vous choisisez le papier !\n \n ");
            }else if (usermove == 1 && compmove == 2)
            {
                    printf("vous avez perdu ! \t car il a choisie les cailloux et vous choisisez le papier !\n \n ");
            }else if (usermove == 2 && compmove == 0)
            {
                printf("vous avez perdu ! \t car il a choisie les cailloux et vous choisisez les sciseaux !\n \n ");
            }else if (usermove == 2 && compmove == 1)
            {
                printf("vous avez gagne ! \t car il a choisie le papier et vous choisisez les sciseaux !\n \n ");
            }
            else 
            {
                printf("c'est une egalite! \t car vous les deux ont choisis les memes elements!\n \n ");
            }
        }
}