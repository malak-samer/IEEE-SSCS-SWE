#include<stdio.h>
void boost_signal(int n);
int signal_strength=0;
int main(){
printf("signal strength before calling:%d\n",signal_strength);
boost_signal(signal_strength);
printf("signal strength after calling:%d\n",signal_strength);
}
void boost_signal(int n){
    int signal_strength=100;
    printf("booster:signal strength=%d\n",n);
}