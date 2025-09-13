#include <iostream>
using namespace std;
int main() {
   int num1, num2, num3, a;
    cout << "1- Add"<<endl;
    cout << "2- SUB"<<endl;
    cout << "3- MUL"<<endl;
    cout << "4- DIV"<<endl;
    cout << "5- SQUARE"<<endl;
    cout << "6- CUBE"<<endl;

    cout<<"Enter your Choice "<<endl;
    cin>>a;
    switch(a){
        case 1:
            cout<<"enter the first number"<<endl;
            cin>>num1;
            cout<<"Enter the Secound number"<<endl;
            cin>>num2;
            cout<<"Addtion is"<<(num1+num2)<<endl;
            break;
        case 2:
            cout<<"enter the first number"<<endl;
            cin>>num1;
            cout<<"Enter the Secound number"<<endl;
            cin>>num2;
            cout<<"Sub is"<<(num1-num2)<<endl;
            break;
        case 3: 
            cout<<"enter the first number"<<endl;
            cin>>num1;
            cout<<"Enter the Secound number"<<endl;
            cin>>num2;
            cout<<"Mul is"<<(num1*num2)<<endl;
            break;
        case 4:
            cout<<"enter the first number"<<endl;
            cin>>num1;
            cout<<"Enter the Secound number"<<endl;
            cin>>num2;
            cout<<"Div is"<<(num1/num2)<<endl;
            break;
        case 5:
            cout<<"enter the number"<<endl;
            cin>>num1;
            cout<<"SQUARE is"<<(num1*num1)<<endl;
            break;
        case 6:
            cout<<"enter the number"<<endl;
            cin>>num1;
            cout<<"CUBE is"<<(num1*num1*num1)<<endl;
            break;
            
    }
}