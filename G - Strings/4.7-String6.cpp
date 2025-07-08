#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main(){
  string s;
  cout<<" Enter String:"<<endl;
  getline(cin,s);
  string temp;
  cout<<temp<<endl;
  stringstream ss(s);  // Create stringstream object from string s
  while(ss>>temp){     // Extracts one word at a time (space-separated)
    cout<<temp<<endl;
  }


  //count the maximum number of string occur in sentence
  string st;
  cout<<" Enter String:"<<endl;
  getline(cin,st);
  string tem;
  vector<string> v;
  stringstream sss(st);
  while(sss>>tem){
    v.push_back(tem);
  }
  cout<<endl;
  sort(v.begin(),v.end());
  int maxCount=1;
  int count=1;
  for(unsigned int i=1;i<v.size();i++){
     if(v[i]==v[i-1]){
      count++;
     }else{
      count=1;
     }
     if(count>maxCount) maxCount=count;
  } 

   count=1;
  for(unsigned int i=1;i<v.size();i++){
     if(v[i]==v[i-1]){
      count++;
     }else{
      count=1;
     }
     if(count==maxCount){
      cout<<v[i]<<" "<<maxCount<<endl;
     }
  } 
 //Output
 /*
Enter String:
my name is is a a moni moni moni

moni 3
 */

}