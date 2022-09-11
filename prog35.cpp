#include<iostream>
using namespace std;

class Area{
int ar;


public: 
       
       void get(int l,int b){
           ar=l*b;
       cout<<"area is"<<ar;
}
     
};

int main(){
Area obj;
int l,b;
cout<<"length amnd breath"<<endl;
cin>>l>>b;
obj.get(l,b);

}
