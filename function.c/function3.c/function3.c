#include<stdio.h>

void check(int a,int b){
printf(" addition is %d\n",(a+b));
printf(" multiplication is %d\n",(a*b));
}
void square(int p){
    printf(" data is %d\n",(p-p));
    printf(" squar is %d\n",(p*p));
}
void check1(int p1){
    printf(" squar is %d\n",(p1*3));
}
int main(){
    check(2,34);
    check1(2);
}