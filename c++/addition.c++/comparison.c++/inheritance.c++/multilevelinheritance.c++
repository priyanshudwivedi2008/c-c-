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
     void display(){
       std::cout<<"derived1 class"<<std::endl;
     }
    };
    
class derived2:public derived1{
public:
     void showmessage(){
        std::cout<<"derived2 class"<<std::endl;
      }
    };
    
int main(){
    derived2 obj;       //base class method
    obj.show();         //derived1 class method
    obj.display();      //derived2 class method
}    