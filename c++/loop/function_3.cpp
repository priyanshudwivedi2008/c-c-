#include<iostream>
using namespace std;
int s=0;
void data (int s){
    if(s%2==0){
        cout<<"even";
    }
    else{
        cout<<"odd";
    }
}
 int main(){
 for(int i=1; i<=10; i++){
    s=s+i;
    cout<<i<<endl;
 }
 cout<<"sum is"<<s<<endl;
 data(s);
 }  