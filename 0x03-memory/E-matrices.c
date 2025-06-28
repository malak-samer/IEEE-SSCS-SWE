#include<stdio.h>
#include<stdlib.h>
int main(){
    int m,n,j,k;
    printf("enter matrix 1 dimensions:");scanf("%d%d",&m,&n);
    int**a=(int**)malloc(sizeof(int*)*m);
    for(int i=0;i<n;i++){
        a[i]=(int*)malloc(sizeof(int)*n);}
    printf("enter matrix 2 dimensions:");scanf("%d%d",&j,&k);
    int**b=(int**)malloc(sizeof(int*)*j);
   for(int i=0;i<k;i++){
        b[i]=(int*)malloc(sizeof(int)*k);}
    if(n!=j){printf("invalid dimensions");return 0;}
    int **res=(int**)malloc(sizeof(int*)*m);
    for(int i=0;i<k;i++){
        res[i]=(int*)malloc(sizeof(int)*k);}
    for(int x=0;x<m;x++){for(int y=0;y<n;y++){
        printf("enter element a[%d][%d]:",x,y);scanf("%d",&a[x][y]); }}
    for(int x=0;x<j;x++){for(int y=0;y<k;y++){
        printf("enter element b[%d][%d]:",x,y);scanf("%d",&b[x][y]); }}
    for(int x=0;x<m;x++){for(int y=0;y<k;y++){
        res[x][y]=0;
        for(int z=0;z<n;z++){
            res[x][y]+=a[x][z]*b[z][y];} }}
    for(int x=0;x<j;x++){for(int y=0;y<k;y++){
        printf("%d",res[x][y]);printf("\t");}printf("\n");}
        free(a);free(b);free(res);

}