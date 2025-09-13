#include<iostream>
using namespace std;
class coffeemachine{
public:
     void makecoffee(){
        boilwater();
        brewcoffee();
        cout<<"coffee is ready!"<<endl;
     }

private:
      void boilwater(){
        cout<<"Boiling Water---"<<endl;
      }
      void brewcoffee(){
        cout<<"Brewing coffee---"<<endl;
      }
    };

int main(){
    coffeemachine cm;
    cm.makecoffee();
}         