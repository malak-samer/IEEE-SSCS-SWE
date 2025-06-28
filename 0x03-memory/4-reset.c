#include<stdio.h>
int access_one();
int access_two();
int access_both();
int main(){
int num1,num2;
num1=access_one();num2=access_two();
num1=access_one();num2=access_two();
num1=access_one();num2=access_two();
num1=access_one();num2=access_two();
num1=access_one();num2=access_two();
printf("access_one is called %d times\n",num1);
printf("access_two is called %d times\n",num2);
printf("the total functions calls is %d times",access_both()-1);
}
int access_one(){
    static int count1=0;
    access_both();
    return++count1;}
int access_two(){
    static int count2=0;
    access_both();
    return++count2;}
int access_both(){
static int count3=0;
return++count3;
}