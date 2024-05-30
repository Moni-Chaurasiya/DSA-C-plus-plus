/*
  1
  12
  123
  1234
  12345
  123456
  1234567
  

      1
     12
    123
   1234
  12345
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no of row";
    cin>>n;
   
     for( int i=1;i<=n;i++){
         for( int j=1;j<=i;j++){
            cout<<j;
            
         }
         cout<<endl;
     }

     for( int i=1;i<=n;i++){
         for( int j=1;j<=n-i;j++){
            cout<<" ";
         }
         for( int k=1;k<=i;k++){
            cout<<k;
         }
         cout<<endl;
    }
    
    for( int i=1;i<=n;i++){
         for( int j=1;j<=n;j++){
            if(i+j>=n+1){
              cout<<"*";
            }
            else{
              cout<<" ";
            }
         }
        
         cout<<endl;
    }
    return 0;
}