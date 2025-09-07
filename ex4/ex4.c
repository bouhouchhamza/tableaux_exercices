#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , taille , max ;
    printf("veuiller entrer la taille de tableaux :");
    scanf("%d",&taille);

    int tab[taille];

    for(i=0;i<taille;i++){
            printf("veuiller entrer %d element : \n",i+1);
            scanf("%d",&tab[i]);
            }

    for(i=0;i<taille;i++){
                max = tab[0];
                if(tab[i]>max){
                max = tab[i];
    }
    }

        printf("L'element maximum est : %d\n", max);


    return 0;
}
