#include<stdio.h>
#include<stdarg.h>
void super_printer(const char*flag, ...){
    va_list(list);
    va_start(list,flag);
    int i=0;
    if(flag=='\0'){printf("nill\n");}
    while(flag[i]!='\0'){
    if(flag[i]=='f'){printf("%f",va_arg(list,double));}
    else if(flag[i]=='i'){printf("%d",va_arg(list,int));}
    else if(flag[i]=='c'){printf("%c",va_arg(list,int));}
   else if(flag[i]=='s'){printf("%s",va_arg(list,char*));}
    i++;
}
    va_end(list);
}
int main(){
    super_printer("ficsi",5.5,4,'#',"hello",6);
    printf("\n");
    super_printer('\0');
}