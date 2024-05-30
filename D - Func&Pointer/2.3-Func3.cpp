#include<iostream>
using namespace std;

int factorial(int n){
    if(n<=1)  return 1;
    else return n*factorial(n-1);
}

int combination(int n, int r){
    float nCr = factorial(n)/(factorial(r) * factorial(n-r));
    return nCr;
}

int main(){
    int x;
    cout<<"Enter number :"<<endl;
    cin>>x;
    for(int i=0; i<=x; i++){
         for(int j=0; j<=i; j++){
          cout<<combination(i,j)<<" ";
           
         }
         cout<<endl;
    }
    
    int n;
    cout<<"Enter number :"<<endl;
    cin>>n;
    for(int i=0; i<=n; i++){
        int curr= 1;
         for(int j=0; j<=i; j++){
            cout<<curr<<" ";
            curr = curr*(i-j)/(j+1);  //iC(j+1) = iCj*(i-j)/(j+1)
           
         }
         cout<<endl;
    }
    

}

