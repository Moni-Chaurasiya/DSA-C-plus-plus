/*     ******
       *****
       ****
       ***
       **
       *

*/




#include<iostream>
using namespace std;
int main(){
    int n,m;
     cout<<"Enter no of row";
     cin>>n;
     cout<<"Enter no of column";
    cin>>m;
    for(int i=1;i<=n;i++){
      for( int j=1; j<=m;j++){
         cout<<"*";
      }
     m=m-1;
      cout<<endl;
      
    }
  //  n=n-1;
    return 0;
}