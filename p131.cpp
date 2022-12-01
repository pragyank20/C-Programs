#include<iostream>
using namespace std;


class Sample{
public:
        void display(int x){
        throw x;
        }
        void display(float y){
        throw y;
        }
        void display(char c){
        throw c;
        }
        };
        
int main(){
int a;
float b;
char ch;
Sample s;
cout<<"Enter Integer value";
cin>>a;
try{
s.display(a);
}
catch (int x){
cout<<"Exception Caought"<<a;
}
}
