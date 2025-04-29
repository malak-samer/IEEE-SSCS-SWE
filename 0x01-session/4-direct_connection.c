#include<stdio.h>
int main(){
    int signal=98;
    int*ptr=&signal;
    printf("signal:%d address:%d",*ptr,ptr);
}