#include<iostream>
using namespace std;


int factorial(int n){
    if(n<=1)  return 1;
    else return n*factorial(n-1);
}

void combination(int n, int r){
    float nCr = factorial(n)/(factorial(r) * factorial(n-r));
    cout<<nCr<<endl;
}
void permutation(int n, int r){
    float nPr = factorial(n)/ factorial(n-r);
    cout<<nPr<<endl;
}

int main(){
   int n;
   cout<<"Enter n:"<<endl;
   cin>>n;
   int r;
   cout<<"Enter r:"<<endl;
   cin>>r;

   int nfact=1;   //n!
   for(int i=2; i<=n; i++){
     nfact= nfact*i;
   }

   int rfact=1;    //r!
   for(int i=2; i<=r; i++){
     rfact= rfact*i;
   }

   int nrfact=1;   //(n-r)!
   for(int i=2; i<=n-r; i++){
     nrfact= nrfact*i;
   }
    
   int nCr = nfact/(rfact * nrfact); 
   cout<<nCr<<endl;
   
    combination(n,r);
    permutation(n,r);

    
    return 0;
}
