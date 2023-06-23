#include<stdio.h>
int main(){
char c;
printf("enter any key : \n ");
scanf("%c",&c);

if(c>=65 && c<= 90){
    printf("press key is uppercase alphabet");
}
else if(c>=97 && c<=122){
    printf(" press key is lowercase alphabet");
}
else if(c>=48 && c<=57){
    printf(" press key is digit");
}
else{
    printf("press key is special character");
}
return 0;
}