#include<iostream>
using namespace std;\
class Sample{
int roll,marks;

public: Sample(){
cout<<"Enetr Roll No. and marks"<<endl;
cin>>roll>>marks;
}
void display(){
cout<<"Roll No.:"<<roll<<endl<<"Marks:"<<marks<<endl;
}
};
int main(){
Sample ob;
ob.display();
}


