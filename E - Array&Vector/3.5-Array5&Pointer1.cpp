#include<iostream>
using namespace std;
int main(){
    
    int arr[3]={1,4,6};
    int* ptr = arr;      // &arr will give error
    cout<<ptr<<endl;
    cout<<&arr[0]<<endl;    // arr[0] will give error
    int array[]= {4,3,2,5,7,8};
    int* p= &array[0];
    cout<<p<<endl;
    p[0]=8; // *p = 8
    for(int i=0;i<=5;i++){
       cout<<p[i]<<" ";   // p can access the whole array because we have given address of first element of array to p
       //cout<<i[p]<<" ";
    }
    cout<<endl;
           //OR
    for(int i=0;i<=5;i++){
       cout<<*p<<" ";
       p++;  
    }
}