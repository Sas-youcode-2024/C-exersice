#include<stdio.h>
#include<stdlib.h>



int main() {

int semain ;
srand(time(NULL));

semain = rand() % 7 +1 ;

switch(semain){
case 1 :
    printf("dimanche");
    break;
case 2 :
    printf("lundi");
    break ;
case 3 :
    printf("mardi");
    break;
case 4 :
    printf("mercredi");
    break;
case 5 :
    printf("jeudi");
    break;
case 6 :
    printf("vendredi");
    break;
case 7 :
    printf("samedi");
    break;
default :
   printf("il n'y a plus de semaines");

}



return 0;
}
