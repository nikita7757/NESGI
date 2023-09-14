//string palindrome with using inbuilt function 
#include<iostream>
using namespace std;
void revstr(string& str){
    int n= str.length();
    for(int i=0;i<n/2;i++){
        swap(str[i],str[n-i-1]);
    }
}
int main(){
  
  string str;
  cout<<"enter string: ";
  cin>>str;
  string str2=str;
  revstr(str);
   if(str2==str){
    cout<<"string is palimdrone";
   }else{
    cout<<"string is not palindrome";
   }
   
   return 0;
    }

