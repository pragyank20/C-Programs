#include<iostream>
using namespace std;
class Sample{

static int count;
int id;
char name[20];
public: void read_data(){
cout<<"Enter ID and Name of Student"<<endl;
cin>>id>>name;
count++;
}
void display(){
cout<<"ID is:"<<id<<"and Name is:"<<name<<endl;
}
static void count(){
cout<<"Total Student Count is:"<<count<<endl;
}
};
int Sample::count;

int main(){
Sample s1,s2,s3;
s1.read_data();
s2.read_data();
s3.read_data();
Sample::count();
s3.display();
}

















