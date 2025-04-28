#include<stdio.h>
int main(){
    char c;
    printf("enter a letter:");
    scanf("%c",&c);
    if((c>='A')&&(c<='Z')){printf("%c is a upper case",c);}
     else if((c>='a')&&(c<='z')){printf("%c is a lower case",c);}
}