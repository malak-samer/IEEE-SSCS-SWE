#include<stdio.h>
int echo_data(void*data);
int main(){
int n;
void *ptr=&n;
printf("enter a number:");
scanf("%d",&n);
printf("%d",echo_data(ptr));
}
int echo_data(void*data){
return *(int*)data;
}
