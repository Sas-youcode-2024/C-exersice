  #include<stdio.h>
  #include<stdlib.h>



  int main() {

  int N ;

  printf("veuillez saisir la valeur de N : ");
  scanf("%d",&N);

  if(N%2==0){
    printf("cet nomber %d est paire.",N);
  }else{
    printf("cet nomber %d est impire.",N);
  }


  return 0;
  }
