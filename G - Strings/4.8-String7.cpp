#include<iostream>
#include<string>
using namespace std;
int main(){
  //Stoi vs stoll built-in functions
  /*
  stoi --> string to integer --> integer can store -2^31 to 2^31 -1
  stoll --> string to long long  --> long long can store -2^63 to 2^63 -1
  */

 string str= "123445";
 int x= stoi(str);   //String to integer
 long long xz= stoll(str);  //String to long long integer 
 cout<<x<<endl;   //123445
 cout<<x+1<<endl;  //123446

 int a = 12356678;
 string s= to_string(a);
 cout<<s<<endl;


 //Find max in a given string
 string st[]={"0123","0023","456","00182","0002901"};
 int max = stoi(st[0]);
 string maxS=st[0];
for(int i=1;i<5;i++){
    int n=stoi(st[i]);
    if(n>max){
        maxS= st[i];
        max=n;
    }
}
cout<<maxS<<" "<<max<<endl;
}