
//add as freind Function 
#include<iostream>
using namespace std;

class Sample{
     int real,imag;
     public: void get_data(){
             cout<<"Enter Real And Imaginary Part"<<endl;
             cin>>real>>imag;
     }
     
             void display(){
             cout<<real<<"+i"<<imag<<endl;
             }
             
             friend Sample operator +(Sample ,Sample);
};
Sample operator +(Sample s1 ,Sample s2){
             Sample s3;
             s3.real=s1.real+s2.real;
             s3.imag=s1.imag+s2.imag;
             return s3;
             }
int main(){
     Sample s1,s2,s3;
     s1.get_data();
     s2.get_data();
     s3=s1+s2;
     s3.display();   
}
