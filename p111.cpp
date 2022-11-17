#include<iostream>  
using namespace std;
class Sample {
int real , imag;
public: void getInput(){
cout<<"Enter Real and Imaginary Part"<<endl;
cin>>real>>imag;
}
void display(){
cout<<real<<"+i"<<imag<<endl;
}
Sample operator =(Sample s1){
real=s1.real;
imag=s1.imag;
}
};

int main(){
Sample s1,s2;
s2.getInput();
s1=s2;
s1.display();
}
/* void getInput()
          {
          cout<<"Enter Real and Imaginary Part"<<endl;
          cin>>real>>imag;
          }
          void display()
          {
          cout<<real<<"+i"<<imag<<endl;
          } */
