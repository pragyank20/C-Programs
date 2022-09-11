#include<iostream>
using namespace std;

struct Time{
int hours;
int min;
int sec;
int total;
public: 
       void get(){
       cout<<"enter time , min,seconds"<<endl;
       cin>>hours>>min>>sec;
}
       void displayData(){
       total=hours*3600+min*60+sec;
       cout<<"total seconds are"<<total<<endl;

}
};

int main(){
struct Time obj;
obj.get();
obj.displayData();
}

