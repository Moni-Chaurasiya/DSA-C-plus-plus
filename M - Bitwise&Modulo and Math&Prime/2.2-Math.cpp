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
/*
Every factor of n comes in pairs:

If i divides n, then n/i is also a factor.

For example:

For n = 36
Pairs of factors are:

(1, 36)

(2, 18)

(3, 12)

(4, 9)

(6, 6) ← special case (√n)
*/
int main(){
   int n;
    cout << "Enter a number" << endl;
    cin >> n;

  factor(n);
}