#include<iostream>
using namespace std;
int main(){
int i,n1,n2,s=0;
cout<<"enter the value of n1 and n2"<<endl;
cin>>n1>>n2;
i=n1;
while(i<=n2){
if(i%2==0){
s=s+i;
}
i++;
}
cout<<"sum="<<s;
}


