#include<stdio.h>
struct node{int value;struct node*next};
struct node *create_node();
void add(struct node*l);
void print(struct node*l);
void fill(struct node*l);
int main(){
    struct node *l=create_node();
    add(l);
    fill(l);
    print(l);}
struct node* create_node(){
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=NULL;
    return newnode;}
void add(struct node*l){
    l->next=(struct node*)malloc(sizeof(struct node));
    struct node*ptr=l->next;ptr->next=NULL;}
void print(struct node*l){
    struct node*ptr=l;
    while(ptr!=NULL){printf("%d\n",ptr->value);ptr=ptr->next;}}
void fill(struct node*l){
    struct node*ptr=l;
    while(ptr!=NULL){printf("enter value:");
    scanf("%d",&ptr->value);ptr=ptr->next;    }}