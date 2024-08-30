#include<stdio.h>


int main() {

int N1 , N2 ;

printf("entrer la valeur de  nomber 1 : ");
scanf("%d",&N1);
printf("entrer la valeur de  nomber 2 : ");
scanf("%d",&N2);

if(N1!=N2){
    printf("la somme est %d",N1+N2);
}else{
    printf("le triple de leur somme est %d",(N1+N2)*3);
}

return 0;
}
