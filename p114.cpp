#include<iostream>
using namespace std;

template<class t1 ,class t2,class t3>

void large(t1 num1 , t2 num2 , t3 num3){

if (num1>num2&&num1>num3)
cout<<num1<<"is largest number"<<endl;

else if (num2>num1&&num2>num3)
cout<<num2<<"is largest number"<<endl;

else if (num3>num2&&num3>num1)
cout<<num3<<"is largest number"<<endl;
}

int main(){
int num11;
float num22;
char ch2;
cout<<"Enter Integer Value"<<endl;
cin>>num11;
cout<<"Enter float Value"<<endl;
cin>>num22;
cout<<"Enter Character Value"<<endl;
cin>>ch2;
large(num11,num11,ch2);
large(num11,num11,num22);
large(num11,num22,ch2);
}
