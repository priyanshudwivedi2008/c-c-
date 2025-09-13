#include<iostream>
using namespace std;
int s=0;
void checkdata (int s){
     if (s>0){
        cout<<s<<"is positive";
     }
     else{
        cout<<s<<"is negative";
     }
}
void data (int s){
    if(s%2==0){
        cout<<s<<"even";
    }
    else{
        cout<<s<<"odd";
    }
    checkdata(s);
}
void printdata(){
    for(int i=1; i<=10; i++){
    s=s+i;
    cout<<i<<endl;
    }
    cout<<"sum is"<<s<<endl;
    data(s);
}
int main (){
     printdata();
}        