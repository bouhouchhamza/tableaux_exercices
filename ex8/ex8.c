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
            printf("le %d element :",i+1);
            scanf("%d",&tab1[i]);
    }
    for(i=0;i<taille;i++)
        tab2[i]=tab1[i];


    printf("le tableaux original est : \n");
    for(i=0;i<taille;i++)
        printf("le %d element : %d \n",i+1,tab1[i]);



     printf("le tableaux copie est : \n");

    for(i=0;i<taille;i++)
        printf("le %d element : %d \n",i+1,tab2[i]);

    return 0;
}
