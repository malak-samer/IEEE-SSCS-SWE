#include<stdio.h>
int global=0;
int main(){
    int local=1;
    int dynamic=malloc(sizeof(int));
    char*str="abc";
    printf("(%p:data segment)->%d",&global,global);
    printf("(%p:stack)->%d",&local,local);
    printf("(%p:heap)->%d",&dynamic,dynamic);
    printf("(%p:stack)->%d",str,*str);
    
}