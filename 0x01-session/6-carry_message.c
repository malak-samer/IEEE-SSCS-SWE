#include<stdio.h>
void print_message(char*msg);
int main(){
char*ptr="message";
print_message(ptr);
}
void print_message(char*msg){
    printf("%s",msg);
}
