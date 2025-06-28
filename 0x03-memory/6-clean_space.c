#include<stdio.h>
#include<stdlib.h>
void*clear_allocation(int size);
int main(){
int n;
printf("enter the size of array:");
scanf("%d",&n);
void*p=clear_allocation(n);}
void*clear_allocation(int size){
    int*ptr=(int*)malloc(sizeof(int)*size);
    for(int i=0;i<size;i++){
*(ptr+i)=0; }
return (void*)ptr;}