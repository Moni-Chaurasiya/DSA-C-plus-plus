#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
void factor(int n){
    
    for(int i=1;i*i<=n;i++){

    if(n%i==0) {
        cout<<i<<" ";
        if(i!=sqrt(n)) cout<<n/i<<" ";
    }
    }
   
}
int main(){
   int n;
    cout << "Enter a number" << endl;
    cin >> n;

  factor(n);
}