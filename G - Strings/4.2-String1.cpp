#include<iostream>
#include<string>
using namespace std;
int main( ){
   string moni ="monichaurasiya";
   cout<<moni<<" ";
   cout<<endl;
   cout<<sizeof(moni)<<endl;
   cout<<moni.length()<<endl;
  // string m;
  // cin>>m; // only if given string have no space 
  // cout<<m<<endl; //My name --> in ths case only (My) will print because space and enter will treat as end 
   string a;
   getline(cin,a);
   cout<<a<<endl;
}