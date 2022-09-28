#include<iostream>
using namespace std;
class Gp{
      public:
         int value;
         void get_input(){
            cout<<"Enter A no."<<endl;
            cin>>value;
         }
};

class Parent : public Gp{
    public:
         void show(){
    cout<<"Cube of No. is:"<<value*value*value<<endl;
  }
};

class Child : public Parent{
public:
       void display(){
        cout<<"Value is"<<value<<endl;
       }

};

int main(){
    Child ob1;
    ob1.get_input();
    ob1.show();
    ob1.display();
}