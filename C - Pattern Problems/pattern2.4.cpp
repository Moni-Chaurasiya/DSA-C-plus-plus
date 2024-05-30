/*
      1
     1 1
    1   1
   1     1
  1       1
 1         1
1234567654321

*/



#include<iostream>
using namespace std;
int main(){
    int m;
    int n;
    int j;
    cout<<"Enter no of row";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=(n-i); j++){
         cout<<" ";
        }
        for(int j=1; j<=i;j++){
            if (i == n || j == 1 ){
            cout<<j;
            }
            else{
                cout<<" ";
            }
        }
          for(int k=(i-1); k>=0; k--){
              if ( i== n|| k == 1 ){
              cout<<k;
              }
              else{
                cout<<" ";
              }
        }
        cout<<endl;
    }
    return 0;
}