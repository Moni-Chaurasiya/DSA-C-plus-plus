// Reverse an array

#include<iostream>
#include<vector>
using namespace std;

int main(){
  
    vector<int> arr1;
    vector<int> arr2;
    int n;
    cout<<"Enter array size:"<<endl;
    cin>>n;

    cout<<"Enter array element:"<<endl;

    for(int i=0; i<n;i++){
        int q;
        cin>>q;
        arr1.push_back(q) ;
    } 

    for( int i=arr1.size()-1; i>=0;i--){
        
        arr2.push_back(arr1[i]) ;
    } 
 
    for(unsigned int i=0; i<arr2.size(); i++){
        
        cout<<arr2[i]<<" ";
    }    
    
    //Without using extra array
    cout<<endl;
    int  j=arr1.size()-1;
    for(unsigned int i=0;i<=j;i++){
         int t=arr1[i];
            arr1[i]=arr1[j];
            arr1[j]=t;
            
            j--;
    }
 
    for(unsigned int i=0; i<arr1.size(); i++){
        
        cout<<arr1[i]<<" ";
    } 

    // int t =  arr1[0];
    // arr1[0]=arr1[arr1.size()];
    // arr1[arr1.size()] =arr1[0];

}