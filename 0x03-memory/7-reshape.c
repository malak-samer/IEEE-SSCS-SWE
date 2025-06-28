#include<stdio.h>
#include<stdlib.h>
void*_reshape(void*ptr,int old,int new_size);
int main(){
    int new,old;void*p1,*p2;
    printf("enter old size:");scanf("%d",&old);
    p1=malloc(sizeof(int)*old);
    printf("enter new size:");scanf("%d",&new);
    p2=_reshape(p1,old,new);
}
void*_reshape(void*ptr,int old,int new_size){void*p;int*x,*y;
    if(ptr=='\0'){ptr=malloc(sizeof(int)*new_size);}
    else if(new_size==0){free(ptr);return NULL;}
    else{p=malloc(sizeof(int)*new_size);*x=(int*)ptr;*y=(int*)p;
        for(int i=0;i<old;i++){
            *(y+i)=*(x+i);}}
            p=(void*)y;
            return p;}