#include<stdio.h>
struct being{char*name;int age;float energy_level;};
void print_being(struct being *b);
int main(){
    struct being a={"sara",15,50};
    print_being(&a);}
void print_being(struct being *b){
    printf("Name:%s,Age:%d,Energy:%f",b->name,b->age,b->energy_level);
}