//Write a c++ program

#include<iostream>
using namespace std;

class GrandParent{
protected : int yob;
char name[20];    
public: void getInput(){
        cout<<"Enter Name and Year of birth of GrandParent"<<endl;
        cin>>name>>yob;
       }
        void display(){
        cout<<"Name of GrandParent is:"<<name<<endl<<"Year of Birth of GrandParent is:"<<yob<<endl;
      }      
};

// Derived Class.....

class Parent: public GrandParent{
protected : int yob1;
char name1[20];    
public: void getInput1(){
        cout<<"Enter Name of Parent and Year of birth of Parent"<<endl;
        cin>>name1>>yob1;
       }
        void display1(){
       cout<<"Name of Parent is:"<<name1<<endl<<"Year of Birth of Parent is:"<<yob1<<endl;
      }      
};
class Child: public Parent{
protected : int yob2;
char name2[20];    
public: void getInput2(){
        cout<<"Enter Name of child and Year of birth of child"<<endl;
        cin>>name2>>yob2;
       }
        void display2(){
       cout<<"Name of Child is:"<<name2<<endl<<"Year of Birth of Child is:"<<yob2<<endl;
      }    
       void ageDiff(){
       cout<<"Age Differnce Between Grandparent $ Parent is:"<<yob1-yob<<endl;
       cout<<"Age Differnce Between Grandparent $ Child is:"<<yob2-yob<<endl;
       cout<<"Age Differnce Between Parent $ Child is:"<<yob2-yob1<<endl;
} 
};


int main(){
Child c;
c.getInput();
c.display();
c.getInput1();
c.display1();
c.getInput2();
c.display2();
c.ageDiff();
}
