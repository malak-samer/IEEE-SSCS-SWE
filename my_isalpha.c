 #include <stdio.h>
 int my_isalpha(char c){
    if(((c>='A')&&(c<='Z')) || (c>='a')&&(c<='z')){
        return 1;
    }
    return 0;
 }