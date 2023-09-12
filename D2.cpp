//write a program for swapping of two numbers without using third variables.

#include <iostream>  
using namespace std;  
int main()  
{  
int a, b;     
 cout<<"enter value of a: ";
 cin>>a;
 cout<<"enter  value of b: ";
 cin>>b;
 cout<<"before swapping"<<" value of a is "<<a<<" value of b is "<<b<<endl;      
a=a*b;    
b=a/b;     
a=a/b;     
cout<<"After swapping value of a is = "<<a<<"  value of b = "<<b;      
return 0;  
}  
