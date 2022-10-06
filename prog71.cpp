//Write a c++ program

#include<iostream>
using namespace std;

class Student{
protected : int id;
char name[20];    
public: void getInput(){

cout<<"Enter Name and id"<<endl;
cin>>name>>id;
}
void display(){
cout<<"Name is:"<<name<<"Id is:"<<id<<endl;
}      
};

// Derived Class.....

class Marks: public Student{
protected: float s1,s2,s3;
float avg;
           

   public:
public: void getInput1(){

cout<<"Enter Subject 1 , Subject 2 and Subject 3 marks"<<endl;
cin>>s1>>s2>>s3;
}
void display1(){
avg=(s1+s2+s3)/3.0;
cout<<"Total marks are"<<s1+s2+s3<<endl;
cout<<"Average marks are"<<avg<<endl;
}
};

int main(){
Marks m;
m.getInput();
m.getInput1();
m.display();
m.display1();
}
