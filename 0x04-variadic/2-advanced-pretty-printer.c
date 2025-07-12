#include<stdio.h>
#include<stdarg.h>
void advanced_pretty_printer(const char flag,const char*separator,const unsigned int n, ...){
    va_list(list);
    va_start(list,n);
    for(int i=0;i<n;i++){
        if(flag=='s'){printf("%s",va_arg(list,char*));printf("%s",separator);}
        if(flag=='i'){printf("%d",va_arg(list,int));printf("%s",separator);}}
    va_end(list);}
int main(){
    advanced_pretty_printer('i',"+",4,1,2,3,4);
    printf("\n");
    advanced_pretty_printer('s',"-",2,"hello","world");
}
