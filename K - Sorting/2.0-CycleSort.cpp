#include<iostream>
#include<vector>
using namespace std;
int main(){
    // a ={5,1,2,4,3}
    //    {3,1,2,4,5} 
    //    {2,1.3,4,5}
    //    {1,2,3,4,5} 
    // In cycleSort number of swap is n-1

    int arr[]={5,1,2,4,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i= 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int i=0;
    while(i<n){
      int correctIdx=arr[i]-1;
      if(i==correctIdx) i++;
      else  swap(arr[i],arr[correctIdx]);
      
    }

    for(int i= 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}