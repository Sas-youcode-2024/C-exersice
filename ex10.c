#include<stdio.h>
#include<stdlib.h>
int main(){

char voyelle ;



printf(" veuillez saisir n'importe lequel alphabet qui veux-tu : ");
scanf("%c",&voyelle);

switch(voyelle){
  case 'A' :
      printf(" %c est une voyelle",voyelle);
  break;
  case 'O':
      printf(" %c est une voyelle",voyelle);
  break;
    case 'U':
      printf("%c est une voyelle",voyelle);
  break;
    case 'E':
      printf("%c est une voyelle",voyelle);
  break;
    case 'Y':
      printf("%c est une voyelle",voyelle);
  break;
    case 'I':
      printf("%c est une voyelle",voyelle);
  break;
    default :
        printf("%c n'est pas une voyelle",voyelle);
}


return 0;
}
