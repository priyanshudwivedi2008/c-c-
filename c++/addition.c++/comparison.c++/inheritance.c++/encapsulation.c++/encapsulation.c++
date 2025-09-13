#include<iostream>
using namespace std;
class student{
private:
 int age;
public:
     void setage(int a){
           age=a;
     }
     int getage(){
        return age*age;
     }
};
int main(){
    student s;
    s.setage(18);
    cout<<"student age:"<<s.getage();  
}