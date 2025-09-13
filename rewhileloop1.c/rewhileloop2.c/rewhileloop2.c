#include<stdio.h>
int main (){
    int p;
    int i=10;
    printf("Enter the any number \n");
    scanf("%d", &p);
    while (i>=1){
    printf("%d *%d = %d\n",p,i,i*p);
    i--;
    }
}