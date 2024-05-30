/* 
     *
     * *
     * * *
     * * * *
     * * * * * 

*/




#include<iostream>
using namespace std;
int main(){
    int n;
     cout<<"Enter no of row";
    cin>>n;
   
     for( int i=1;i<=n;i++){
         for( int j=1;j<=i;j++){
            cout<<"*";
            
         }
        // m=m-1;

         cout<<endl;
    }

/*  
       ******
       *****
       ****
       ***
       **
       *

*/


    int x;
    cout<<"Enter number of row :"<<endl;
    cin>>x;
    for( int i=1;i<=x;i++){
     for(int j=1; j<=x-i+1;j++){
        cout<<"*";
     }
     cout<<endl;
    }
    return 0;
}