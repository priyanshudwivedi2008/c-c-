#include<iostream>
using namespace std;
class Animal{
public:
virtual void sound(){
    cout<<"Animal makes sound"<<endl;
}
};
class Dog:Public Animal{
public:
      void sound()override{
        cout<<"Dog Barks"<<endl;
      }
    };
int main(){
    Animal*animalptr:
    Dog d:
    animalptr=&d:
    
    animalptr->sound():
}