#include<stdio.h>
#include<math.h>

int main (){
  int x1,x2,y1,y2 , mn;

  printf("entrer le coordonné x1: ");
  scanf("%d",&x1);
   printf("entrer le coordonné x2: ");
  scanf("%d",&x2);
   printf("entrer le coordonné y1: ");
  scanf("%d",&y1);
   printf("entrer le coordonné y2: ");
  scanf("%d",&y2);

  mn = sqrt(pow(x2-x1,2) + pow(y2-y1,2));

  printf("la distance MN est : %d",mn);
}




