#include<stdio.h>
void repeat_message(int n);
int main(){
    int n=0;
    printf("enter n:");
    scanf("%d",&n);
    repeat_message(n);
    return 0;
}
void repeat_message(int n){
    int i=0;
    while(i<n){
        printf("Hello,world\n");
        i++;
    }
}