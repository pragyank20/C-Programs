#include<iostream>
using namespace std;
class Student{
protected: int id;
           char name[20];
public: void getInput(){
    cout<<"Enter ID and Name"<<endl;
    cin>>id>>name;
}    
void Display(){
    cout<<"ID is:"<<id<<endl<<"Name is:"<<name<<endl;
}       
};
class Test1:public virtual Student{
    protected: int obj1,des1;
  public: void getInput1(){
    cout<<"Enter Objective Marks & Descriptive Marks"<<endl;
    cin>>obj1>>des1;
}    
void Display1(){
    cout<<"Objective Marks  is:"<<obj1<<endl<<"Descriptive Marks is:"<<des1<<endl;
} 
};
class Test2:public virtual Student{
    protected: int obj2,des2;
  public: void getInput2(){
    cout<<"Enter Objective Marks & Descriptive Marks"<<endl;
    cin>>obj2>>des2;
}    
void Display2(){
    cout<<"Objective Marks  is:"<<obj2<<endl<<"Descriptive Marks is:"<<des2<<endl;
} 
};

class Result:public Test1,public Test2{
    protected : int atdm;
    public: void getInput3(){
    cout<<"Enter Attendence Marks"<<endl;
    cin>>atdm;
    }
    void display3(){
        cout<<"Attendence Marks:"<<atdm<<endl;
        if(obj1>obj2){
            cout<<obj1<<"is best marks"<<endl;
        }
        else{
            cout<<obj2<<"is best marks"<<endl;
        }
    }
void display4(){
        if(des1>des2){
            cout<<des1<<"is best marks"<<endl;
        }
        else{
            cout<<des2<<"is best marks"<<endl;
        }
    }
};
int main(){
    Result r;
    r.getInput();
    r.Display();
    r.getInput1();
    r.Display1();
     r.getInput2();
    r.Display2();
    r.getInput3();
    r.display3();
    r.display4();   
}

