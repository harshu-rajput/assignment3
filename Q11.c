#include<stdio.h>
int main(){
float a,b,c,d,e,per;

printf("enter mathematics marks : ");
scanf("%f",&a);

printf("enter physics marks : ");
scanf("%f",&b);

printf("enter chemistry marks : ");
scanf("%f",&c);

printf("enter bio marks : ");
scanf("%f",&d);

printf("enter psycho marks : ");
scanf("%f",&e);

per=((a+b+c+d+e)/500)*100;

if(per>=33){
    printf("student is passed");
}
else{
    printf("student is fail");
}
return 0;
}