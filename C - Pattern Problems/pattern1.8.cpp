/*
   1234567
   2345671
   3456712
   4567123
   5671234
   6712345
   7123456

*/

#include<iostream>
using namespace std;
int main(){
    int n,m,j;
      cout<<"Enter no of row";
    cin>>n;
    for(int i=1 ; i<=n; i++){
        for(int j=i;j<=n;j++){
            cout<<j;
        }
        for(int k=1; k<=(i-1); k++){
            cout<<k;
        }
        cout<<endl;
        
    }
    return 0;
}
