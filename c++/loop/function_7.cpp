#include<iostream>
using namespace std;
int s=0;
int p,p1;
void checkdata (int s){
    if (s>0){
        cout<<s<<"is positive"<<endl;
    }
    else{
        cout<<s<<"is negative"<<endl;
    }
}
void data (int s){
    if(s%2==0){
        cout<<s<<"is even"<<endl;
    }
    else{
        cout<<s<<"is odd"<<endl;
    }
    checkdata(s);
}
void data1(int S1,int S2){
    cout<<"Addition is"<<(S1+S2)<<endl;
    cout<<"subtraction is"<<(S1-S2)<<endl;
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
    data1(p,p1);
}
int main(){
     printdata();
}       