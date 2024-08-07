#include<stdio.h>

int main() {
   char nom[20], prenom[20], sex ;
   int age , numero ;

   printf("entrez votre nom ");
   scanf("%s",&nom);
   printf("entrez votre prenom ");
   scanf("%s",&prenom);
   printf("entrez votre sex ");
   scanf(" %c",&sex);
   printf("entrez votre age ");
   scanf("%d",&age);
   printf("entrez votre numero ");
   scanf("%d",&numero);


   printf("vos informations personnelles \n nom : %s \n prenome: %s \n sexe : %c \n age : %d \n numero de thelephone : %d",nom,prenom,sex,age,numero);


   return 0 ;
}
