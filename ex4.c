#include <stdio.h>

int main() {

    int  N1,N2,N3,N4 ;
    float moyenne ,somme ;

     printf("entrez le nomber 1 : ");
     scanf("%d",&N1);
     printf("entrez le nomber 2 : ");
     scanf("%d",&N2);
     printf("entrez le nomber 3 : ");
     scanf("%d",&N3);
    printf("entrez le nomber 4 : ");
    scanf("%d",&N4);

     somme = N1+N2+N3+N3 ;
     moyenne = somme / 4 ;

     printf("la somme est : %.2f \nle moyenne est %.2f",somme,moyenne);
}

