#include<iostream>
using namespace std;
class Employe{
    char name[30];
    int age;
public:
      void getData();
      void putData();
     };
     void Employe::getData(){
        cout<<"enter name :"<<endl;
        cin>>name;
        cout<<"enter age :"<<endl;
        cin>>age;
     }
     void Employe::putData(){
        cout<<"Name Of Employe is : "<<name<<endl;
        cout<<"Age of Employe is : "<<age<<endl;
     }

     int main(){
        int n;
        cout<<"enter the no. of employes"<<endl;
        cin>>n;
        Employe e1[n];
        for (int i = 0; i < n; i++)
        {
        e1[i].getData();
        e1[i].putData();
        }
        
     }