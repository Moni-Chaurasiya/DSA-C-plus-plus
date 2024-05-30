#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no of row";
    cin>>n;
    for(int i=1; i<=2*n-1; i++){
        // for(int j=1; j<=2*n-1; j++){
        //     if(i==1|| j==1 || i==2*n-1|| j==2*n-1){
        //         cout<<n<<" ";
        //     }
        //     else if(i+j==2*n && i==j){
        //         cout<<1<<" ";
        //     }
        //     else if((i==n-1 || i==n+1)&&(j==n-1 || j==n+1) || (i+j==2*n+1 && i+j==2*n-1) ) {
        //         cout<<2<<" ";
        //     }
        //     else{
        //         cout<<" "<<" ";
        //     }
        // }



        // for(int j=1; j<=i;j++){
        //     cout<<j<<" ";
        // }
        // for(int k=1; k<=n-i; k++){
        //     cout<<i<<" ";
        // }
        for(int j=1; j<=2*n-1; j++){
        int a= i;
        int b= j;
        if(a>n) a=2*n-i;
        if(b>n) b=2*n-j;
        int x = min(a,b);
        cout<<n-x+1;
        }
        cout<<endl;
    }
}