#include<stdio.h>
#include<string.h>
int main(int argc,char*argv[]){
if(argc==1){printf("Silence .Nothing came through");}
else{for(int i=1;i<argc;i++){
    if(strcmp(argv[i],"revelation")==0){printf("a truth is revealed.you are not alone\n");break;}
    printf("%s\n",argv[i]);}}}