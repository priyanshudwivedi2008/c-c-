#include<iostream>
using namespace std;
class calculator {
public:
     int add(int a,int b){
        return a+b;
     }
     float add(float a,float b){
        return a+b;
     }
    };
int main(){
    calculator calc;
    cout<<calc.add(5,3)<<endl;
    cout<<calc.add(2.5f,3.5f)<<endl;
}      