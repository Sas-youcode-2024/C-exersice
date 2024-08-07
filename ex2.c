    #include<stdio.h>



    main (){
   int C ;
   float F ;
   printf("veuillez saiser la température en Fahrenheit : ");
   scanf("%f",&F);

   C = (F-32)/1.8 ;

   if ( C<=0 ) {
    printf("%d : tres froid ",C);
   }
   else if ( C>=0 && C<=15 ){
    printf("%d : froid",C);
   }
   else if ( C>=15 && C<=30){
    printf("%d : chaud",C);
   }
   else {
    printf("%d : tres chaud",C);
   }
    }
