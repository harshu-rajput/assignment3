#include<stdio.h>
int main(){
int x;
printf("enter the no : \n");
scanf("%d",&x);

if(x%3==0 && x%2==0){
    printf("%d is divisible by 2 and 3",x);
}else{
     printf("%d is not divisible by 2 and 3",x);
}
    return 0;
}