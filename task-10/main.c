 #include<stdio.h>
int main(){
    for(char c='a';c<='z';c++){
       if(c=='q'){continue;}
        putchar(c);
    }
    for(char x='Z';x>='A';x--){
        if(x=='Q'){continue;}
        putchar(x);
    }
}