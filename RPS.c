#include <stdio.h>  
#include <stdlib.h>  //we use the stdlib.h to use the functions rand() and srand() wich are principal for randomely .
#include <time.h>    //we use time.h to edit the seed of srand to get changed after every second .
  
int main(void)  
{  
    int usermove , compmove;
    srand(time(NULL));  //we gave srand the function time to get changed .

        while (1)
        {
             //we ask the user to choose one of the three options .
          
             printf("Bienvenue au jeux celebre caillousx , papier , sciseaux !\n");
             printf("choisissez un de ces nombre : \t \t pour cailloux : 0\t pour papier : 1\t pour sciseaux : 2\t pour sortir : 9 \t \n");
             scanf("%d",&usermove);

    
           compmove = rand() % 3 ;    //we gave computer move that value wich mean that it will choose between 0,1,2 .

            if (usermove == 9)
            {
               exit(1);    //if the user choose 9 the programme will finish , we use the function exite() for this operation .
        
            //now we gave the condition of playing like we all know with a reason of the result .
              
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

            // if the computer move and user move are the same , the programme will declare it a draw .
            else 
            {
                printf("c'est une egalite! \t car vous les deux ont choisis les memes elements!\n \n ");
            }
        }
}
