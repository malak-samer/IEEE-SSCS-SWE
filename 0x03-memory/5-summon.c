#include<stdio.h>
int*summon_allies(int*allies,int n);
int main(){
    int n;
    printf("enter array size:");
    scanf("%d",&n);
    int*ptr=(int*)malloc(sizeof(int)*n);
  int*allies=summon_allies(ptr,n);}
  int*summon_allies(int*allies,int n){
if(allies=='\0'){printf("allocationis failed")};
else{for(int i=0;i<n;i++){
    printf("enter element %d",i+1);
    scanf("%d",&*(allies+i));}
return allies;}}