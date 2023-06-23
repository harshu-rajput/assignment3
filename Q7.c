#include<stdio.h>
int main(){
    double a,b,c,d;
printf( "Enter cofficient of x square: \n") ;
scanf("%4f",&a ) ; 

printf( "enter cofficient of x: \n") ;
scanf("%4f",&b ) ; 
printf( "enter third cofficient : \n") ;
scanf("%4f",&c ) ;

d=b*b-4*a*c;
if(d>0){
   printf(" roots are real");
}
else if(d==0){
     printf(" roots are equall");
}
else {
     printf(" roots are imaginary");
}



return 0;
}