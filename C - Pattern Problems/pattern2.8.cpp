/*

  *  
  *
*****
  *
  *

*   *
 * *
  *
 * *
*   *

*/
#include<iostream>
using namespace std;
int main(){
    int n; 
    cout<<"Enter odd number:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        int mid=(n+1)/2;
        for(int j=1;j<=n;j++){
            if(mid==j || mid==i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            // cout<<"*";
        }
        cout<<endl;
    }
     for(int i=1;i<=n;i++){
        
        for(int j=1;j<=n;j++){
            if(i==j || i+j==(n+1) ){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            // cout<<"*";
        }
        cout<<endl;
    }
}