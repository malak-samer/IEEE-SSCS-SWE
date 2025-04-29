#include<stdio.h>
int is_response_detected(int strength);
int main(){
    int strength=0;
    printf("enter strength:");
    scanf("%d",&strength);
    if(is_response_detected(strength)){
        printf("a response is detected\n");
    }
    else{printf("no response\n");}
    return 0;
}
int is_response_detected(int strength){
    if(strength>50){return 1;}
    else {return 0;}
}
