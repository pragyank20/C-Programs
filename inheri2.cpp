#include<iostream>
using namespace std;
class Gp{
    public:
    int id;
    char name[20];
    int se,de,oop,total;
    float avg;
    char g[5];
      
};

class Parent : public Gp{
    public:
    void getInput(){
    cout<<"Enter Id"<<endl;
    cin>>id;
    cout<<"Enter Your Name"<<endl;
    cin>>name;
    cout<<"Enter Marks Of SE:";
    cin>>se;
    cout<<"Enter Marks Of DE:";
    cin>>de;
    cout<<"Enter Marks Of OOP:";
    cin>>oop;
    }
};

class Child : public Parent{
    public:
    void display(){
        total=se+de+oop;
        avg=total/3;
        cout<<"Name of Student is:"<<name<<endl;
        cout<<"Id Of Stusent is:"<<id<<endl;
        cout<<"Total Marks Of Stusent is:"<<total<<endl;
        cout<<"AverageOf Stusent is:"<<avg<<endl;

        if(avg>=90&&avg<100)
        cout<<"Grade A"<<endl;
         else if(avg>=60&&avg<80)
        cout<<"Grade B"<<endl;
         else if(avg>=40&&avg<60)
        cout<<"Grade C"<<endl;
         else if(avg<40)
        cout<<"Grade E"<<endl;
        else
        cout<<"Fail"<<endl;
    }
};

    int main(){
        Child ob;
        ob.getInput();
        ob.display();
    }

