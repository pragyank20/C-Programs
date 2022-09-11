#include<iostream>
using namespace std;
int main(){
int n,i=2,fac=1;
cout<<"enter the value"<<endl;
cin>>n;
do{
fac=fac*i;
i++;
}while(i<=n);
cout<<"the factorial is"<<fac;
}

