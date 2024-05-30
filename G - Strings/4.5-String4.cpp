#include<iostream>
#include<string>
using namespace std;
int main(){
  // Input a string and return the number of times the neighbouring characters are different from each other.

  string str;
  cout<<"Enter the number of string"<<endl;
  cin>>str;
  int count=0;
  int n= str.length();
  for(int i=0; i<n;i++){
     if(n==1){
        break;
     }
     if(n==2 && str[0]!=str[1]){
        count=1;
        break;
     }
     if(str[i]==str[i-1]  || str[i]==str[i+1]){
        count=count;
     }else{
        count++;
     }
  }
  cout<<count<<endl;
  

}