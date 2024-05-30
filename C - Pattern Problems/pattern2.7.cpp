/*
A B C D E 
A B C D E 
A B C D E 
A B C D E 
A B C D E 

A 
A B 
A B C 
A B C D 
A B C D E
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    for(int i = 1; i<=n;i++){
        for(int j=1;j<=n;j++){
            // char c= j+64;
            // cout<<c<<" ";
            cout<<(char)(j+64)<<" ";
        }
        cout<<endl;
    }

    for(int i = 1; i<=n;i++){
        for(int j=1;j<=i;j++){
            // char c= j+64;
            // cout<<c<<" ";
            cout<<(char)(j+64)<<" ";
        }
        cout<<endl;
    }
}