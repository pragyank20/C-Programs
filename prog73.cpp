#include<iostream>
using namespace std;
class Internals{
protected : int s1,s2,s3;

public: void getInput1(){
          cout<<"Enter Subject 1 , Subject 2 and Subject 3 internal marks"<<endl;
          cin>>s1>>s2>>s3;
}
};

class Externals{
protected : int s11,s22,s33;
public: void getInput2(){
          cout<<"Enter Subject 1 , Subject 2 and Subject 3 External marks"<<endl;
          cin>>s11>>s22>>s33;
}
};



class Result: public Internals, public Externals{
protected: int total,total1;
float avg;

public:   
           void display(){
total=s1+s2+s3;
total1=s11+s22+s33;
avg=(total+total1)/3.0;
cout<<"Total Marks Of Internal marks are:"<<total<<endl;
cout<<"Total Marks Of Internal marks are:"<<total1<<endl;
cout<<"Total Marks Of Internal marks and External marks are:"<<total+total1<<endl;
cout<<"Average Marks are:"<<avg<<endl;
        }         
};

int main(){
Result r;
r.getInput1();
r.getInput2();
r.display();
}
