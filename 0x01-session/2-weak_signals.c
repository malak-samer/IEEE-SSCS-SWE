#include<stdio.h>
int is_strong_signal(int strength);
void check_signal(int strength);
int main(){
    int n;
    printf("enter strength:");
    scanf("%d",&n);
    is_strong_signal(n);
    check_signal(n);
    return 0;
}
 int is_strong_signal(int strength){
    if(strength>50){return 1;}
    else{return 0;}
 }
 void check_signal(int strength){
    if(is_strong_signal(strength)){printf("Strong signsl detected\n");}
    else{printf("No signal detected \n");}
 }