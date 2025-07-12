#include"_printf.h"
int _printf(const char*format, ...){
    va_list ap;int count=0;const char*p;
    if(format=='\0') return -1;
    va_start(ap,format);
    p=format;
    while(*p!='\0'){
        if(*p==' ')continue;
        if(*p=='%'){p++;
        if(*p=='c'){char c=(char)va_arg(ap,int);count+=_putchar(c);}
        else if(*p=='s'){char*str=va_arg(ap,char*);
            while(*str!='\0'){count+=_putchar(*str);str++;}}
        else if (*p=='%'){count+=_putchar('%');}
        else if(*p=='d'||*p=='i'){int num=va_arg(ap,int);int i=0;int j=0;char str[32];
        while(num){str[i]=num%10+'0';num/=10;i++;}
        while(j<i){char c=str[j];str[j]=str[i-1];str[i-1]=c;i--;j++;}str[j]='\0';
        while(str[i]!='\0'){count+=_putchar(str[i]);i++;}}
        else if (*p=='b'){int num =va_arg(ap,int);char str[32];int i=0;int j=0;
        while(num){if(num%2==0){str[i]='0';}else{str[i]='1';}i++;num/=2;}str[i]='\0';
        while(j<i){char c=str[j];str[j]=str[i-1];str[i-1]=c;i--;j++;}
        while(str[i]!='\0'){count+=_putchar(str[i]);i++;}}
        else if(*p=='u'){int num=va_arg(ap,int);char str[32];
        if(num<0){num=-num;}int i=0;int j=0;
        while(num){str[i]=num%10+'0';num/=10;i++;}
        while(j<i){char c=str[j];str[j]=str[i-1];str[i-1]=c;i--;j++;}str[j]='\0';
        while(str[i]!='\0'){count+=_putchar(str[i]);i++;}}
        else if (*p=='o'){int num=va_arg(ap,int);int oct=0, rem=0,place=1;
        while(num){rem=num%8;oct=oct+rem*place;place*=10;num/=8;}
        int i=0;int j=0;char str[32];
        while(num){str[i]=num%10+'0';num/=10;i++;}
        while(j<i){char c=str[j];str[j]=str[i-1];str[i-1]=c;i--;j++;}str[j]='\0';
        while(str[i]!='\0'){count+=_putchar(str[i]);i++;}}
        else if (*p=='X'){int num=va_arg(ap,int);int rem=0,i=0,j=0;char hex[100];
        while(num){rem=num%16;if(rem<10){hex[i]=rem+'0';}else{hex[i]=rem+55;}i++;num/=16;}
        hex[i]='\0';
        while(hex[j]!='\0'){count+=_putchar(hex[j]);j++;}}
        else if (*p=='x'){int num=va_arg(ap,int);int rem=0,i=0,j=0;char hex[100];
        while(num){rem=num%16;if(rem<10){hex[i]=rem+'0';}else{hex[i]=rem+87;}i++;num/=16;}
        hex[i]='\0';
        while(hex[j]!='\0'){count+=_putchar(hex[j]);j++;}}
        else if (*p=='p'){void*ptr=va_arg(ap,void*);
        count+=_putchar('0');count+=_putchar('x');
        char hex[]="0123456789abcdef";intptr_t num=(intptr_t)ptr;char buffer[100];int i=0;
        while(num>0){buffer[i]=hex[num%16];i++;num/=16;}i--;
        while(i>0){count+=_putchar(buffer[i]);i--;}}
        else if(*p=='_'){p++;{if(*p=='s'){char*str=va_arg(ap,char*);int i=0;
        while(str[i]!='\0'){if(str[i]>='A'&&str[i]<='Z'){str[i]+=32;}
        count+=_putchar(str[i]);i++;}}}}
        else if(*p=='='){p++;{if(*p=='s'){char*str=va_arg(ap,char*);int i=0;
        while(str[i]!='\0'){if(str[i]>='a'&&str[i]<='z'){str[i]-=32;}
        count+=_putchar(str[i]);i++;}}}}
        else if(*p=='+'){int num=va_arg(ap,int);if(num>=0){count+=_putchar('+');}else{count+=_putchar('-');}}
        else if(*p>'0'&&*p<='9'){int n=(int)*p-48;while(n>0){count+=_putchar(' ');n--;}
        int num=va_arg(ap,int);int i=0;int j=0;char str[32];
        while(num){str[i]=num%10+'0';num/=10;i++;}
        while(j<i){char c=str[j];str[j]=str[i-1];str[i-1]=c;i--;j++;}str[j]='\0';
        while(str[i]!='\0'){count+=_putchar(str[i]);i++;}}
        else if(*p=='-'){p++;int n=(int)*p-48;int num=va_arg(ap,int);int i=0;int j=0;char str[32];
        while(num){str[i]=num%10+'0';num/=10;i++;}
        while(j<i){char c=str[j];str[j]=str[i-1];str[i-1]=c;i--;j++;}str[j]='\0';
        while(str[i]!='\0'){count+=_putchar(str[i]);i++;}
        while(n>0){count+=_putchar(' ');n--;}}
        else if(*p=='r'){char *str=va_arg(ap,char*);int i=0;int j=0;
        while(str[i]!='\0'){i++;}i--;
        while(str[j]!='\0'){char c=str[j];str[j]=str[i];str[i]=c;j++;i--;}}}

        else{count+=_putchar(*p);}p++;}
        va_end(ap);return count;
}
