#include<stdio.h>
int main(){
    float side1,side2,side3;
printf("enetr first side of triangle : \n ");
scanf("%f",&side1);

printf("enetr first side of triangle : \n ");
scanf("%f",&side2);

printf("enetr first side of triangle : \n ");
scanf("%f",&side3);

if((side1+side2)>side3 || (side2+side3)>side1 || (side1+side3)>side2){
    printf(" triangle is valid");
}else{
    printf("triangle is invalid");
}
return 0;
}