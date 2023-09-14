//String reverse without using inbuilt function
#include<iostream>
using namespace std;
void revstr(string& str){
    int n= str.length();
    for(int i=0;i<n/2;i++){
        swap(str[i],str[n-i-1]);
    }
}
int main(){
  // string str="NIKITA";
  string str;
  cout<<"enter string: ";
  cin>>str;
   revstr(str);
   cout<<str;
   return 0;
    }

