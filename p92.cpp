#include<iostream>
using namespace std;

class Base1{
         
public:   
    void display(){
    cout<<"Inside By Base1 Class"<<endl;
    }    
};
class Base2{
         
public:   
    void display(){
    cout<<"Inside By Base2 Class"<<endl;
    }    
};

class Derived : public Base1 ,public Base2{

public:   
    void display(){
    cout<<"Inside By Derived Class"<<endl;
    }

};


int main(){
Derived obj;
obj.Base1::display();
obj.Base2::display();
obj.display();
}
