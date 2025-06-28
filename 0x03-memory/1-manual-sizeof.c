#include<stdio.h>
int manual_sizeof();
int main(){
printf("%d",manual_sizeof());
}
int manual_sizeof(){
int *p1;
int a=1;
p1=&a;
int n=(char*)(p1+1)-(char*)p1;
return n;

}
