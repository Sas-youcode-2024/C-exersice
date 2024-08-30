#include<stdio.h>
#include<math.h>


int main(){

 int a , b , c ;
 int delta;

 printf("saisir la valeur a :");
 scanf("%d",&a);
 printf("saisir la valeur b :");
 scanf("%d",&b);
 printf("saisir la valeur c :");
 scanf("%d",&c);

 printf("------  %dx^2+%dx+%d = 0 ---------- \n",a,b,c);

 delta = pow(b,2)- 4*a*c ;


  printf("delta est %d \n",delta);
 float x , x1 , x2 ;

 if(delta==0){
    x = -(b)/(2*a) ;
    printf(" la solution cette equation est %.2f ",x);
 }else if (delta>0){
   x1 = (-b-sqrt(delta))/(2*a);
   x2 = (-b+sqrt(delta))/(2*a);
   printf(" la solution cette equation sont %.2f et %.2f ",x1,x2);
 }else{
   printf("l'eqaution ne possede pas de solution .");
 }

return 0;
}
