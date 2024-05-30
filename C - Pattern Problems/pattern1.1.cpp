
/*   * * * * 
     * * * * 
     * * * * 
     * * * *     */


#include<iostream>
using namespace std;
int main() {
    int n,m;
     cout<<"Enter no of row";
    cin>>n;
     cout<<"Enter no of column";
    cin>>m;
    
    for( int i=1;i<=n;i++){
         for( int i=1;i<=m;i++){
            cout<<"*";
         }
         cout<<endl;
    }


    return 0;
}