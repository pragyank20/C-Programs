#include<iostream>
using namespace std;
class Add {
    
public:
    int n1,n2,sum=0;
    void addTwoNum();
        
    };
void Add::addTwoNum() {
    cout<<"enter the num1 and num2"<<endl;
    cin>>n1>>n2;
    sum=n1+n2;
    cout<<"Sum="<<sum<<endl;
}
int main(){
    Add obj1;
    obj1.addTwoNum();
}
