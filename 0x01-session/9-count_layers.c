#include<stdio.h>
int sum_layers(int n);
int main (){
int n=0;
printf("enter a number:");
scanf("%d",&n);
printf("sum=%d",sum_layers(n));
}
int sum_layers(int n){
    int sum=0;
    if(n>0){
    return sum=n+sum_layers(n-1);
    }

}
