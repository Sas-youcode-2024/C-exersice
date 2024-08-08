#include<stdio.h>


int main(){

 int n1,n2,n3, x;

 printf("entrer le nomber 1 : ");
 scanf("%d",&n1);
 printf("entrer le nomber 2 : ");
 scanf("%d",&n2);
 printf("entrer le nomber 3 : ");
 scanf("%d",&n3);

  x = n1 ;
  n1 = n3 ;
  n3 = x;

  printf("l'order inverse est %d %d %d",n1,n2,n3);



   return 0 ;
}
