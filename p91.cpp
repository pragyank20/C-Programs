//Write a program in c++    

#include<iostream>
using namespace std;

class Base{
protected:     int a=10;
            int b=5;
            int sum;
         
public:   
    virtual void add(){
    cout<<"Addition By Base Class"<<endl;
    sum=a+b;
    cout<<"Sum is"<<sum<<endl;
    }    
};
class Derived : public Base{
public:
       void add(){
       cout<<"Addition By Derived Class"<<endl;
       sum=a+b;
       cout<<"Sum is"<<sum<<endl;
       }

};

int main(){
Base *p;
Derived obj;
p=&obj;
p ->add();
}

