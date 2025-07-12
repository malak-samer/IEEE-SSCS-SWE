#include<stdio.h>
#include<stdarg.h>
int sum_them_all(const unsigned int n, ...){
    va_list list;
    va_start(list,n);
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=va_arg(list,int);
    }
    va_end(list);
    return sum;
}
int main(){
printf("sum = %d\n",sum_them_all(3,1,2,3));
printf("sum= %d\n",sum_them_all(6,1,2,3,4,5,6));
}