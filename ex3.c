#include <stdio.h>


int main() {
int A,B;

printf("veuillez saiser la valure A : ");
scanf("%d",&A);

printf("veuillez saiser la valure B : ");
scanf("%d",&B);

float sum = A + B ,
      dif = A - B ,
      mul = A * B ,
      div = A / B ,
      rest = A % B ;

printf("%d + %d = %.2f \n",A,B,sum);
printf("%d - %d = %.2f \n",A,B,dif);
printf("%d * %d = %.2f \n",A,B,mul);
printf("%d / %d = %.2f \n",A,B,div);
printf("%d / %d = %.2f \n",A,B,rest);

return 0;
}
