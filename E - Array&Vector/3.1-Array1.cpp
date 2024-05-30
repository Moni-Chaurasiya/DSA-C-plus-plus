#include<iostream>
using namespace std;
int main(){
    int arr[7];  //0 1 2 3 4 5 6
    arr[0]=9;  // Value of 0th index is 2 
    arr[1]=31;
    arr[2]=20;
    arr[3]=12;
    arr[4]=5;
    arr[5]=3;
    arr[6]=2;

    int a[4]={1,12,3,4};

    cout<<arr[6]<<endl;
    cout<<a[2]<<endl;

    int b[]={1,4,5,3,7,9};
    cout<<b[4]<<endl;
    int c[6];
//  taking input from user
    for(int i=0;i<=5;i++){
        cin>>c[i];
    }
 // Printing Output
    for(int i=0;i<=5;i++){
        cout<<c[i]<<endl;
    }
}