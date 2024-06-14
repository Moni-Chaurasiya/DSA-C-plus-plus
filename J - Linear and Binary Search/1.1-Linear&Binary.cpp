#include<iostream>
using namespace std;
int main(){
    //Linear Search Time complexity = O(n)
    //Binary Search only work if array is sorted(ascending or decending)
    //Binary Search Time complexity = O(log 2 n)=O(log n)
    /**
      
     //Binary Search
     class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n= nums.size();
        int i=0;
        int j=n-1;
        while(i<=j){
        int mid = (i+j)/2; // (i+i+j-i)/2 = (2i/2) + (j-i)/2  if time exceed 
            if(nums[mid]==target){
                return mid;
            }else if(target<nums[mid]){
                j=mid-1;
            }else if(target>nums[mid]){
                i=mid+1;
            }

        }
 
      return -1;
    }
};
     */

//Print lower bound of target element

    int arr[]={1,2,9,4,8,9,15,24};
    int x=16;
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(arr[i]>x){
            cout<<arr[i-1];   //Time complexity = O(n)
            break;
        }

    }
    cout<<endl;

//Print lower bound of target element and upper bound
     int i=0;
     int j=n-1;
     bool flag =false;
     while(i<=j){
     int mid = (i+j)/2;
      if(arr[mid]==x){
        flag=true;
        cout<<"Lower bound is "<<arr[mid-1]<<endl;
        cout<<"Upper bound is "<<arr[mid+1]<<endl;
        break;
      }
      if(arr[mid]<x) {
        i=mid+1;
      }
      if(arr[mid]>x) {
        j=mid-1;
      }
     }
     if(flag==false){

     cout<<"Lower bound is "<<arr[j]<<endl;
     cout<<"Upper bound is "<<arr[i]<<endl;
     }

// find first occurence of element

     int ar[] = {1, 2, 4, 8, 9, 9, 9, 9, 15, 24};
    int y = 9;
    int n1 = sizeof(ar) / sizeof(ar[0]);
    bool fl = false;
    int l = 0;
    int h = n1 - 1;

    while (l <= h) {
        int mid = l + (h - l) / 2;
        if (ar[mid] == y) {
            if (mid == 0 || ar[mid - 1] != y) {
                fl = true;
                cout << "Element found at index: " << mid << endl;
                break;
            } else {
                h = mid - 1;
            }
        } else if (ar[mid] < y) {
            l = mid + 1;
        } else {
            h = mid - 1;
        }
    }

    if (!fl) {
        cout << "Element not found" << endl;
    }

//First non negative smallest element not found in array 
int a[] ={0,1,2,3,4,6,7,9};
  int m = sizeof(a) / sizeof(a[0]);
  for(int i=0;i<m;i++){
    if(a[i]!=i){
        cout<<i;
        break;
    }
  }

cout<<endl;
  //2nd approach
  int p=0;
  int q=m-1;
  
     int ans=-1;
  while(p<=q){
      int mid = p+(q-p)/2;
      if(a[mid]==mid){
        p=mid+1;
      }else{
        ans=mid;
        q=mid-1;
      }
  }
  if(ans==-1){
    ans=m;
  }
  cout<<ans;

}

