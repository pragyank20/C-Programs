#include<iostream>
using namespace std;


class Sample{
public:
        Sample(){
        cout<<"You are Failed!!!";
        }
        };
        
int main(){
int b;
cout<<"Enter Percentage"<<endl;
cin>>b;
try{
if(b<=40){
Sample s;
throw b;
}
else
cout<<"Your marks are:"<<b;
}
catch (int x){
cout<<"Your marks are:"<<b;
}
}
