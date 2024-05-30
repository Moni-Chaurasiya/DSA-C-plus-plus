/*

   *
  ***
 *****
*******
 *****
  ***
   *

*********
**** ****
***   ***
**     **
*       *

*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no of row";
    cin>>n;
      int m=1;
      int nsp=n-1;
      for(int i=1; i<=2*n-1; i++){
        for(int j=1; j<=nsp; j++){
         cout<<" ";
        }
        if(i<=n-1) nsp--;
        else nsp++;
        for(int k=1; k<=m;k++){
            cout<<"*";
        }
        if(i<=n-1) m=m+2;
        else m=m-2;
        cout<<endl;
    }

    for(int i=1;i<=2*n-1;i++){
        cout<<"*";
    }
    cout<<endl;
    for( int i=1;i<=n;i++){
        for( int j=1;j<=n-i;j++){
            cout<<"*";
        }
        for(int j=1; j<=(2*i-1);j++){
            cout<<" ";
        }
        for( int j=1;j<=n-i;j++){
            cout<<"*";
        }
         cout<<endl;
    }
}