
#include<iostream>
using namespace std;

class Sample{
     int value;
     public: void get_data(){
             cout<<"Enter Value"<<endl;
             cin>>value;
     }
     
             void add(){
             cout<<value<<endl;
             }
             
             friend void operator -(Sample &);
            

};
void operator -(Sample &s1){
             s1.value=-s1.value;
             }
int main(){
     Sample s1;
     s1.get_data();
     s1.add();
     -s1;
     s1.add();
     
     
}
