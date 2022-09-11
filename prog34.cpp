#include<iostream>
using namespace std;

class Area{
int l,b,ar;


public: 
       void get(){
       cout<<"leanth amnd breath"<<endl;
       cin>>l>>b;
}
       void displayData(){
       ar=l*b;
       cout<<"area is"<<ar;

}
};

int main(){
Area obj;
obj.get();
obj.displayData();
}
