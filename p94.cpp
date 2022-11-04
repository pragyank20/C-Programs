#include<iostream>
using namespace std;

class Base{
protected:  int num1,num2;
public:
       Base(int a, int b){
       num1=a;
       num2=b;
      }
       virtual void add ()=0;   
};


class Derived : public Base{
public: 
       Derived(int a, int b): Base(a,b){
       }
       void add (){
       cout<<"Addition By Derived Class"<<endl;
       cout<<"Sum is"<<num1+num2<<endl;
       }
};

int main(){
int x,y;
cout<<"Enter NUM1 & NUM2"<<endl;\
cin>>x>>y;
Derived d(x,y);
Base *p;
p=&d;
p->add();
}
