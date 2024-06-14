#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    //Selection Sort --> [5 4 1 3 2]
    //                    1[4 5 3 2]
    //                    1 2[5 3 4]
    //                    1 2 3[5 4]
    //                    1 2 3 4[5] 
    // Time Complexity --> worst case --> O(n^2)
    //                 --> average case --> O(n^2)
    //                 --> best case -->  O(n^2)
    // Space Complexity --> O(1)
    // UsesCases -- Cost of swapping is less
    // DrawBack --> Unstable sorting 
    int arr[5]={5, 3, 1, 4, 2};
    int n=5;
    for(int i=0;i<n-1;i++){
        int min=INT16_MAX;
        int minIdx=-1;
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min=arr[j]; 
                minIdx=j;
            }
        }
        swap(arr[minIdx],arr[i]);
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}