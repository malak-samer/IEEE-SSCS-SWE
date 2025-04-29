#include<stdio.h>
void swap(int*a,int*b);
int main(){
int num1=5;
int num2=6;
printf("before swapping:a=%d b=%d\n",num1,num2);
swap(&num1,&num2);
printf("after swapping:a=%d b=%d\n",num1,num2);
}
void swap(int*a,int*b){
    int temp=0;
    temp=*a;
    *a=*b;
    *b=temp;
}