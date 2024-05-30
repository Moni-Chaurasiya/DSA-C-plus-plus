/*

123456789
1234 6789
123   789
12     89
1       9

*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no of row";
    cin>>n;
    for(int i=1;i<=2*n-1;i++){
        cout<<i;
    }
    cout<<endl;
    for( int i=1;i<=n;i++){
        int a= 1;
        for( int j=1;j<=n-i;j++){
            cout<<a;
            a++;
        }
        for(int j=1; j<=(2*i-1);j++){
            cout<<" ";
             a++;
        }
        
        for( int j=1;j<=n-i;j++){
            cout<<a;
            a++;
        }

         cout<<endl;
    
    }
}