#include<iostream>
using namespace std;
class Sample{
int t,p;
float r;

public:
       Sample(){
t=2;
p=2000;
r=0.08;
}

     Sample(int p1,float r1){
t=2;
p=p1;
r=r1;
}
     Sample(int t1,int p1){
t=t;
p=p1;
r=0.08;
}
      Sample(int t1 ,int p1, float r1){
t=t1;
p=p1;
r=r1;
}

Sample(Sample &s){
t=s.t;
p=s.p;
r=s.r;
}

void display(){
int total;
total=p+(p*r*t)/100;
cout<<"Total Amount is"<<total<<endl;;
}
};



int main(){
int p,r,t;
cout<<"Enter Principal , rate , Time"<<endl;
cin>>p>>r>>t;
Sample s1;
Sample s2(p,r);
Sample s3(p,t);
Sample s4(p,r,t);
Sample s5(s4);
s1.display();
s2.display();
s3.display();
s4.display();
}
