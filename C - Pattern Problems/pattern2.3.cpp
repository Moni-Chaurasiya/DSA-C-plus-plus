/*
   1
  121
 12321
1234321


1
21
321
4321
54321

*/

#include<iostream>
using namespace std;
int main(){
    int n;
      cout<<"Enter no of row";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=(n-i); j++){
         cout<<" ";
        }
        for(int j=1; j<=i;j++){
            cout<<j;
        }
          for(int k=(i-1); k>=1; k--){
            cout<<k;
        }
        cout<<endl;
    }



    for(int i=1; i<=n; i++){
      
        for(int j=i; j>=1;j--){
            cout<<j;
        }
      cout<<endl;
    }
    return 0;
}