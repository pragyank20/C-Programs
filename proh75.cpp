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
protected: int obje,des
public:    void getInput1(){
           cout<<"Enter Objective and Descriptive marks"<<endl;
           cin>>obje>des;
        }
           void display1(){
           cout<<"Objective marks are"<<obje<<endl;
           cout<<"Descriptive marks are"<<des<<endl;
        }         
};
class Sports{
protected: int spm;
public:    void getInput2(){
           cout<<"Enter Additional marks"<<endl;
           cin>>spm;
        }
           void display2(){
           cout<<"Additonal marks are"<<spm<<endl;
      
        }         
};
class Result: public Test , public Sports(){
protected: int total;
public:   void display3(){
total=obje+des+spm;
           cout<<"Total marks are"<<total<<endl;
      
        }  
};
int main(){
Result r;
r.getinput
}
