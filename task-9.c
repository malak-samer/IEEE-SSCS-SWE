#include <stdlib.h>
#include <time.h>
#include<stdio.h>

int main(void)
{
	int n;
    int last;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*output should be: number n last digit is (even | odd),
	the last digit is num, and it is (more | less) than 5*/
    last=abs(n)%10;
    if(last % 2 ==0){printf("n is even");}
    else{printf("n is odd");}
    if(last > 5){printf("n is greater than 5");}
    else if (last < 5){printf("n is less than 5");}
    else{printf("n equal 5");}
	return (0);
}