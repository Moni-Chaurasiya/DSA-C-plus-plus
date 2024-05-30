// reverse of number

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m=0;
    
    while(n>0){
        
        int l =n%10;
        m = m*10 + l;
        n = n/10;
    }
    
    cout<<m<<endl;
    return 0;
}