#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , facture , taille , result  ;
    printf("veuiller la taille de tableaux : ");
    scanf("%d",&taille);

    int tab[taille];
    for(i=0;i<taille;i++){
            printf("veuiller entrer %d :",i+1);
            scanf("%d",&tab[i]);
    }
    printf("veuiller entrer la valeur de facteur :");
    scanf("%d",&facture);
    for(i=0;i<taille;i++){
        result = tab[i] * facture ;
        printf("le resultat de element %d\n %d \n",i+1,result);

    }


    return 0;
}
