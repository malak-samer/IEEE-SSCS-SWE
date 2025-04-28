#include <stdio.h>
 int main(){
    int n;
    int i,j,c,result,rem,first;
    printf("enter a number:");
    scanf("%d",&n);
for(i=0;i<=n;i++){
    for(j=0;j<=n;j++){
        result=i*j;
        c=result+48;
        if(c>57){rem=(result%10)+48;first=(result/10)+48;
        putchar(first);putchar(rem);putchar(',');putchar(' ');continue;
        }
        if(c>156){rem=(result%10)+48;
        result=result/10;
        first=(result%10)+48;
         result=(result/10)+48;
        putchar(result); putchar(first);putchar(rem);putchar(',');putchar(' ');continue;}
        putchar(c);
        putchar(',');
        putchar(' ');
    }
    putchar('\n');
}
    return 0;
 }