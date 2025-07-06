#include<iostream>
using namespace std;
int main(){

    // Print marks which is less than 35
    int n;
    cout<<"Enter size of array:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter marks:";
    for(int i=0; i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
    if(a[i]<35){
        cout<<a[i]<<endl;
    }
    }   

//Count the number of element in given array greater than a given number x
  cout<<"Count the number of element in given array greater than a given number x"<<endl;
    int x;
    cout<<"Enter size of array:"<<endl;
    cin>>x;
    int b[x];
    cout<<"Enter value:";
    for(int i=0; i<x;i++){
        cin>>b[i];
    }
    int y;
    cout<<"Enter number :";
    cin>>y;
    int count=0;
    for(int i=0;i<x;i++){
      if(b[i]>y) count++;
    }
    cout<<"Number of element greater than "<<y<<"is "<<count<<endl;



    int arr[] ={9,6,4,5,6,8,3,2,6,7,9,22};
    int s = sizeof(arr)/sizeof(arr[0]);
    cout<<s;   
    int m[5];
    cout<<&m<<endl;     //0x61fec8
    cout<<&m[0]<<endl;  //0x61fec8
    cout<<&m[1]<<endl;  //0x61fecc
    cout<<&m[2]<<endl;  //0x61fed0
    cout<<&m[3]<<endl;  //0x61fed4
    cout<<&m[4]<<endl;  //0x61fed8    //Memory allocation is continous in nature



}