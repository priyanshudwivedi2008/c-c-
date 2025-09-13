#include<iostream>
using namespace std;
class Base1 {
public:
     void show(){    
     std::cout<<"Base1 class"<<std::endl;  
     }
};
class Base2 {
public:
    void display(){
         std::cout<<"Base2 class"<<std::endl;
    }
};                     

class Derived: public Base1,public Base2{
public:
     void showmessage(){
        std::cout<<"Derived class"<<std::endl;
     }
};     
int main(){
    Derived obj;

    obj.show();    //Base1 class method
    obj.display(); //Base2 class method
    obj.showmessage(); //Derived class method
}    