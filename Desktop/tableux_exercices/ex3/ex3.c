#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , somme = 0 , taille ;
    printf("veuiller entrer la taille de tableaux : ");
    scanf("%d",&taille);

    int tab[taille];
    for(i=0;i<taille;i++){
            printf("entrer combien element %d : ", i+1);
            scanf("%d",&tab[i]);
                somme = somme + tab[i];
    }
    printf("la somme totale des elements est : %d",somme);





    return 0;
}
