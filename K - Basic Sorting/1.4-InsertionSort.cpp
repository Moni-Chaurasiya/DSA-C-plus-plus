#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    //Selection Sort -->  Sorted    5|4 1 3 2   Unsorted
    //                    Sorted    4 5|1 3 2   Unsorted
    //                    Sorted    1 4 5|3 2   Unsorted
    //                    Sorted    1 3 4 5|2   Unsorted
    //                    Sorted    1 2 3 4 5|  Unsorted
    // Time Complexity --> worst case --> O(n^2)
    //                 --> average case --> O(n^2)
    //                 --> best case -->  O(n)
    // Space Complexity --> O(1)
    // UsesCases -- Stable sorting
    int arr[5]={5, 3, 1, 4, 2};
    int n=5;
    for(int i=1;i<n;i++){
        int j=i;
        
      /* while(j>=1 ){
            if(arr[j]>=arr[j-1]){
              break;
            }else{
                swap(arr[j],arr[j-1]);
            }
            j--;
        } */
       while(j>=1 && arr[j]<arr[j-1]){
        swap(arr[j],arr[j-1]);
        j--;
       }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}