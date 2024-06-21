#include<iostream>
#include<vector>
using namespace std;
int main(){
    // check if an array can be partition into two equal part
    int arr[]={1,2, 3, 4, 5, 6,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++){
        arr[i]=arr[i]+arr[i-1];
    }
    int i = 0;
    bool flag=false;
    int idx=-1;
    while(i<n){
        if(2*arr[i]==arr[n-1]) {
            flag=true;
            idx=i;
            break;
        }
        i++;
    }
    if(flag==true){
        cout<<"Yes array can be partitioned into two equal part."<<"Index is "<<idx<<endl;
    }else{
        cout<<"No array cannot be partitioned into two equal part."<<endl;
    }
}