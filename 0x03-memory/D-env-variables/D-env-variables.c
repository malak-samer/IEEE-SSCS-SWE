#include<stdio.h>
#include<stdlib.h>
struct env_var{char*key;char*value;struct env_var*next};
struct env_var*create_var();
void add(struct env_var*var);
void fill(struct env_var*var);
void update(struct env_var*var);
int main(){
struct env_var*a;
a=create_var();
add(a);add(a);
add(a);add(a);
fill(a);
update(a);
}
struct env_var*create_var(){
    struct env_var*var=(struct env_var*)malloc(sizeof(struct env_var));
    var->next=NULL;
    return var;}
void add(struct env_var*var){
    var->next=(struct env_var*)malloc(sizeof(struct env_var));
    struct env_var*ptr=var->next;ptr->next=NULL;}
void fill(struct env_var*var){
struct env_var*ptr=var;
while(ptr!=NULL){
    printf("enter key and value:");scanf("%s%s",&ptr->key,&ptr->value);
    ptr=ptr->next;}}
void update(struct env_var*var){
    char*x;struct env_var*ptr=var;
    printf("enter the env_var's key which you want to update:");
    scanf("%s",&x);
    while(ptr!=NULL){if(strcmp(x,ptr->key)==0){
        printf("enter the new value:");scanf("%s",&ptr->value);}
ptr=ptr->next;
    }}
