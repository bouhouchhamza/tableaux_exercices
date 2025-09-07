#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , taille , min ;
    printf("veuiller entrer la taille de tableaux :");
    scanf("%d",&taille);

    int tab[taille];

    for(i=0;i<taille;i++){
            printf("veuiller entrer %d element : \n",i+1);
            scanf("%d",&tab[i]);
            }

    for(i=0;i<taille;i++){
                min = tab[0];
                if(tab[i]<min){
                min = tab[i];
    }
    }

        printf("L'element minimum est : %d\n", min);


    return 0;
}
