 #include<stdio.h>




 int main(){

 int N ;

 printf("veuillez saisir un nomber : ");
 scanf("%d",&N);

 if(N<0){
    printf("le nomber est nigatif .");
 }else if (N>0){
    printf("le nomber est positif.");
 }else {
    printf("le nomber est nul .");
 }



 return 0;
 }
