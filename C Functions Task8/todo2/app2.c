#include <stdio.h>

void squar(int a,int b){
  int c;
  c = (a*a)+(b*b)+(2(a*b));
  printf("squaring formula is:%d",c);
}
int main(){
    squar(2,3);
    return 0;
}