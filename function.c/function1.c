#include<stdio.h>
void name(int serial_no){
    printf("%d.HELLO MY NAME IS\n",serial_no);
}
int main(){
    for (int i=1; i<=50;i++)
{
 name(i);
}
}