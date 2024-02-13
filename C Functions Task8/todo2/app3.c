#include <stdio.h>
void average(int a,int b,int c){
    float result;
    result = (a + b + c)/3;
    printf("add two numbers:%f",result);
}

int main(){
     average(10,20,3);
    return 0;
}