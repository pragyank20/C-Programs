#include<iostream>
using namespace std;
class Second{
public:
      void displayName();
};
    inline void Second::displayName(){
    cout<<"Pragyank Gujrati"<<endl;
    }
int main(){
    Second name;
    name.displayName();
}