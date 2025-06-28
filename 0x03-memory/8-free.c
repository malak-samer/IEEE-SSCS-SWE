#include<stdio.h>
#include<stdlib.h>
void free_array(int **arr);
int main(){
    int *ptr=(int*)malloc(sizeof(int)*3);
    free_array(&ptr);
}
void free_array(int**arr){
    if(arr!=NULL&&*arr!=NULL){free(*arr);*arr=NULL};
}