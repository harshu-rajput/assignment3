#include<stdio.h>
int main(){
signed int x;
 printf("enter the no : ");
 scanf("%d",&x);

 if(x>0){
    printf("no is positive");
 }
 else if (x==0){
    printf(" no is zero");
}
else{
    printf("no is negative");
}
return 0;
}