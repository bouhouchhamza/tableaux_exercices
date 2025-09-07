#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , taille  ;
    printf("veuiller entrer la taille de tableaux : ");
    scanf("%d",&taille);
    int tab[taille];
    for(i=0;i<taille;i++){
        printf("entrer element %d  : \n",i+1);
        scanf("%d", &tab[i]);
         printf("element %d est : %d  \n", i+1 , tab[i]);
    }
    printf("\nLes elements du tableau sont : \n");
    for(i = 0; i < taille; i++){
        printf("element %d est : %d  \n", i+1 , tab[i]);
    }




    return 0;
}
