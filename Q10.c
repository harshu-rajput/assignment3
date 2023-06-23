#include<stdio.h>
int main(){

int cp,sp,profit,loss ;
 printf("enter cp of product : \n");
 scanf("%d",&cp);

 printf("enter sp of product : \n");
 scanf("%d",&sp);

profit= sp-cp;
loss=cp-sp;

if(sp>cp){
    printf("profit is : %d%%",(profit*100/cp));
}
else{
    printf("loss is : %d%% ",(loss*100/cp));
}





return 0;
}