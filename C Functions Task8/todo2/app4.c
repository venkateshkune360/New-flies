// biggest of two numbers
#include <stdio.h>
void biggest(int a,int b){
    int result;
    result = a>b?a:b;
    printf("add two numbers:%d",result);
}

int main(){
     biggest(10,20);
    return 0;
}