#include<iostream>
using namespace std;
class base{
public:
      void show(){
        std::cout<<"helloo"<<std::endl;
      }
    };
class derived : public base{
public:
      void display(){
        std::cout<<"derived class"<<std::endl;
      }
    };

int main(){
    derived obj;
    obj.show();      //base class method
    obj.display();   //derived class method
}    