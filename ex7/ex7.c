#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , taille ;

    printf("veuiller entrer la taille de tableaux : ");
    scanf("%d",&taille);

    int tab[taille];

    for(i=0;i<taille;i++){
            printf("veuiller entrer l element n %d : ",i+1);
            scanf("%d",&tab[i]);
}
int j ;
    for(j=0;j<taille-1;j++){
            for(i=0;i<taille-1-j;i++)
            if(tab[i]>tab[i+1]){
                    int temp = tab[i];
                    tab[i]=tab[i+1];
                    tab[i+1] = temp ;
                    }

    }

        for(i=0;i<taille;i++)
            printf("le %d element dans votre tableaux en ordre croissant est: %d \n",i+1,tab[i]);



    return 0;
}
