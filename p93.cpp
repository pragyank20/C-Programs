#include<iostream>
using namespace std;

class Base{
public: 
       virtual void display()=0;
};

class Derived1 : public Base{
public:  void display(){
         cout<<"Abstract";
          }
};

class Derived2 : public Base{
public:  void display(){
         cout<<" Class"<<endl;
          }
};

int main(){
Base *p;
Derived1 obj1;
p=&obj1;
p->display();
Derived2 obj2;
p=&obj2;
p->display();
}
