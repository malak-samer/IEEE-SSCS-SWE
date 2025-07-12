#include<stdio.h>
#include<stdarg.h>
void pretty_printer(const char *seperator,const unsigned int n, ...){
    va_list(list);
    va_start(list,n);
    for(int i=0;i<n;i++){
        printf("%d",va_arg(list,int));
        printf("%s",seperator);}
        va_end(list);
    }
    int main(){
        pretty_printer("/",5,2,3,4,5,6);
        pretty_printer("&",4,8,9,10,11);
    }