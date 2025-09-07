#include <stdio.h>
#include <stdlib.h>

int main()
{
 int i , taille ;

    printf("veuiller entrer la taille de tableaux : ");
    scanf("%d",&taille);

    int tab1[taille];
    int tab2[taille];

    printf("veuiller entrer les element : \n");

    for(i=0;i<taille;i++){
            printf("entrer le %d element : \n",i+1);
            scanf("%d",&tab1[i]);
    }
    for(i=0;i<taille;i++)
            tab2[i] = (tab1[taille - 1 - i]);

   printf("le original tableaux est :");
   for(i=0;i<taille;i++)
                printf("le element %d est : %d ",i+1,tab1[i]);

   printf("le inverse tableaux est :");

   for(i=0;i<taille;i++)
                printf("le element %d est : %d ",i+1,tab2[i]);

    return 0;
}
