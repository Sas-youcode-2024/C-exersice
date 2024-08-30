#include<stdio.h>



int main() {

int ans  , jours , mois , h , m , s ;

printf("saisir le nomber d'annee ");
scanf("%d",&ans) ;


jours = ans  * 365 ;
mois = ans *12 ;
h = 24 * jours ;
m = h * 60;
s = m * 60 ;

printf("%d jours .\n",jours);
printf("%d mois .\n",mois);
printf("%d heures .\n",h);
printf("%d minutes .\n",m);
printf("%d secondes .\n",s);


return 0;
}
