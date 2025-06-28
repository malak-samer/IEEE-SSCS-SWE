#include<stdio.h>
void status (int n);
int main(){
void (*ptr)(int n)=&status;
int n;
printf("Enter a number:");
scanf("%d",&n);
ptr(n);
}
void status(int n){
    if (n>0){printf("Positive\n");}
    else if(n<0){printf("Negative\n";)}
    else{printf("Zero\n");}
}
