#include<iostream>
using namespace std;
class Test{
int a,b,c;
public:
Test(int x,int y,int z){
a=x;
b=y;
c=z;
}
int add(){
return a+b+c;
}
};

int main(){
int x,y,z;
cout<<"Enter Number 1 and Number 2 and Number 3"<<endl;
cin>>x>>y>>z;
Test t(x,y,z);
int value=t.add();
cout<<"Add Of Two Numbers are:"<<value<<endl;
}

