 #include <stdio.h>
 int main(){
    int i,j,c,result,rem,first;
for(i=0;i<=9;i++){
    for(j=0;j<=9;j++){
        result=i*j;
        c=result+48;
        if(c>57){rem=(result%10)+48;first=(result/10)+48;
        putchar(first);putchar(rem);putchar(',');putchar(' ');continue;
        }
        putchar(c);
        putchar(',');
        putchar(' ');
    }
    putchar('\n');
}
    return 0;
 }