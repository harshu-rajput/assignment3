#include<stdio.h>
int main(){

char x;
printf("enter the character : ");
scanf("%C",&x);

if(x>=97 && x<=122 ){
    printf("character is lowercaes");
}
else if( x>=65 && x<= 90){
    printf(" character is uppercase");
}
return 0;

}