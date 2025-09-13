#include<iostream>
using namespace std;
int s=0;
int p,p1;
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
        cout<<s<<"even"<<endl;
    }
    else{
        cout<<s<<"odd"<<endl;
    }
    checkdata(s);
}
void printdata(){
    cout<<"Enter the First number"<<endl;
    cin>>p;
    cout<<"Enter the Second number"<<endl;
    cin>>p1;
    for(int i=p; i<=p1; i++){
       s=s+i;
       cout<<i<<endl;
    }
     cout<<"sum is"<<s<<endl;
     data(s);
}
int main(){
    printdata();
}         