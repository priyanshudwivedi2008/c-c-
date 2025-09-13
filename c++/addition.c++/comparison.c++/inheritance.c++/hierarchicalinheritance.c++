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
    
class derived2:public derived1{
public:
     void display2(){
        std::cout<<"derived2 class"<<std::endl;
      }
    };
        
int main(){
    derived1 obj1;
    derived2 obj2;
    obj1.show();
    obj1.display1();
    obj2.show();
    obj2.display2();
}    