#include<stdio.h>
int main(){
     int x ,y,z;
     printf(" enter the first no : \n");
     scanf("%d",&x);

      printf(" enter the first no : \n");
     scanf("%d",&y);

      printf(" enter the first no : \n");
     scanf("%d",&z);
     
     if(x>y && x>z ){
        printf("%d is greater",x);
     } 
     else if (y>z){
        printf("%d is greater",y);
     }
     
     else{
        printf("%d is greater",z);
     }


    return 0;
} 