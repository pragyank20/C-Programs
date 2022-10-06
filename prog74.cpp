#include<iostream>
using namespace std;

class Polygon{
public: int wi,he;
};

class Rectangle: public Polygon{
public: void getInput(){
        cout<<"Enter Length And breath Of Rectangle"<<endl;
        cin>>wi>>he;
       }
void display(){
cout<<"Area of rectangle is:"<<wi*he<<endl;
}
};


class Triangle: public Polygon{
public: void getInput1(){
        cout<<"Enter Base And Height Of Triangle"<<endl;
        cin>>wi>>he;
       }
void display1(){
cout<<"Area of Triangle is:"<<wi*he/2<<endl;
}
};

int main(){

Triangle pl;
pl.getInput();
pl.display();
pl.getInput1();
pl.display1();
}
