#include <stdio.h>
 void area(float Pi,float r){
   float result;
   result = Pi * (r*r);
   printf("area of circle:%f",result);
 }
int main(){
   area(3.14,6.2);
    return 0;
}