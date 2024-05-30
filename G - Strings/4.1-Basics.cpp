#include<iostream>
using namespace std;
int main(){
    char str[5] ={'a','b','c'};
    for(int i=0; i<5;i++){
        cout<<str[i]<<" ";  //a b c
    }
    cout<<endl;

    cout<<str[3];  //Null
    cout<<(int)str[3];
 
    cout<<endl;

    char st[5] ={"abc"};
    for(int i=0; i<5;i++){
        cout<<st[i]<<" ";  //a b c
    }

 //   char ch ='\';   Anything between double quotation is treated as string accept back slash
      char a = '\n';  //  Next line
      char b ='\t';   //  Tab 
      char c ='\0';   //  Null
      cout<<a<<endl;
      cout<<b<<endl;
      cout<<c<<endl;
      cout<<(int)a<<endl;  //10
      cout<<(int)b<<endl;  //9
      cout<<(int)c<<endl;  //0

      char moni[] ={'c','h','a','u','r','a','s','i','y','a'};
      for(int i = 0; moni[i]!='\0';i++){
        cout<<moni[i]<<" ";
      }
      cout<<endl;
      cout<<moni<<" ";
      cout<<endl;
/*  The extra "abc" appended at the end of chaurasiya string might be a result of how C-style strings work in C++. When cout << moni; is executed, it prints the string until it finds '\0' in memory. Since moni is not null-terminated explicitly, it may continue to print adjacent memory until it encounters a null character, which might include the characters "abc" from the st array, following moni in memory. */
      char m[] ={'c','h','\0','a','u'};
      cout<<m<<" ";  //c h
    
}