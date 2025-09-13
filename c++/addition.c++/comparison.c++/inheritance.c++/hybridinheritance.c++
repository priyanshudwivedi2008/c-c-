#include<iostream>
using namespace std;
class Base{
public:
     void show(){
        std::cout<<"Base class"<<std::endl;
     }
    };

class derived1:public Base{
public:
     void display1(){
       std::cout<<"derived1 class"<<std::endl;
     }
    };
    
class derived2{
public:
     void display2(){
        std::cout<<"derived2 class"<<std::endl;
     }
    };

class finalderived: public derived1,public derived2{
public:
     void showmessage(){
        std::cout<<"final derived class"<<std::endl;
     }
    };
    
int main(){
    finalderived obj;     
    obj.show();         //base class method
    obj.display1();     //derived1 class method
    obj.display2();     //derived2 class method
    obj.showmessage();  //final derived class method
}    