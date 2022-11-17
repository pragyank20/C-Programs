#include<iostream>
using namespace std;
   class Sample 
   {
       int feet,inch;
       public:  
       Sample(){
       feet=0;
       inch=0;
       }
       
       Sample(int x ,int y){
       feet=x;
       inch=y;
       }
       friend void operator <<( ostream &  ,Sample &);
       friend void operator <<( ostream &  ,Sample &);
       };
       
       
       void operator <<( ostream &output  ,Sample &s){
       output<<s.feet;
       output<<s.inch;
      
       }
       
        void operator >>(istream &input  ,Sample &s){
        cout<<"Enter Distance in Feet"<<endl;
        input>>d.feet;
        cout<<"Enter Distance in Inch"<<endl;
        input>>d.inch;
        
       }
                          
   
  
  int main()
    {
    int f,i;
    cout<<"Enter Distance in Feet and Inch"<<endl;
    cin>>f>>i;
   Sample s1;
   cin>>d;
   cout<<d;
   Sample s1(f,c);
   cout<<d;
   }
  

