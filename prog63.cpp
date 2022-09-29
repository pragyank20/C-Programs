#include<iostream>
using namespace std;
class Sample{
int a,b;
public:
       Sample(){
a=0;
b=0;
}
Sample(int num1 , int num2){
a=num1;
b=num2;
}
Sample(Sample &s){
a=s.a;
b=s.b;
}
void display(){
cout<<"num1 is:"<<a<<"num2 is:"<<b<<endl;
}
};
int main(){
int a,b;
cout<<"Enter Number 1 and Number 2"<<endl;
cin>>a>>b;
Sample s1;
Sample s2(a,b);
Sample s3(s2);
s1.display();
s2.display();
s3.display();
}
