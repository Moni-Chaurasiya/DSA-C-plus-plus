#include<iostream>
#include<vector>
using namespace std;
int count=0;
int inversion(vector<int>& nums1, vector<int>& nums2){
    int c=0; 
    int i=0;
    int j=0;
    while(i<nums1.size() && j<nums2.size()){
        /*
         When nums1[i] > nums2[j]:
         Because nums1 is sorted, all elements from nums1[i] to nums1[n-1] will be greater than nums2[j].

         So, the number of inversions is (nums1.size() - i) — we add this to the total c.

         Move j ahead to check next element in nums2.

         🔁 When nums1[i] <= nums2[j]:
         No inversion is formed. Move i ahead.
        */
        if(nums1[i]>nums2[j]){  
           c+= (nums1.size()-i);
           j++;
        }
        else{
            i++;
            
        }

    }
    return c;

}
void merge(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
    int i = 0, j = 0, k = 0;
    while (i < nums1.size() && j < nums2.size()) {
        if (nums1[i] <= nums2[j]) {        //nums1[i] >= nums2[j]  to sort in decreasing order
            nums3[k++] = nums1[i++];

        } else {
            nums3[k++] = nums2[j++];
        }
    }

    while (i < nums1.size()) {
        nums3[k++] = nums1[i++];
    }

    while (j < nums2.size()) {
        nums3[k++] = nums2[j++];
    }
}

void mergeSort(vector<int>& v) {
    if (v.size() <= 1) {
        return; // Base case: Already sorted
    }

    int n = v.size();
    int n1 = n / 2;
    int n2 = n - n1;

    vector<int> nums1(v.begin(), v.begin() + n1);
    vector<int> nums2(v.begin() + n1, v.end());

    mergeSort(nums1); // Recursively sort first half
    mergeSort(nums2); // Recursively sort second half
    count += inversion(nums1,nums2); 
    merge(nums1, nums2, v); // Merge sorted halves

    nums1.clear();
    nums2.clear();
}

int main(){
// Count number of inverse can be make in the given array
    int a[]={5,1,8,2,3};
    int m=5;
    int inverse=0;
    for(int i=0;i<m-1;i++){
       for(int j=i+1;j<m;j++){
          if(a[i]>a[j]){ 
            inverse++;
          }
       }
    }
    cout<<inverse<<endl; //Time complexity is O(n^2), Space Complexity is O(1) 



    // Using Divide and conquer approach

    int arr[] = {5, 1, 3, 0, 4, 9, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> v(arr, arr + n);

    cout << "Original array: ";
    for (unsigned int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    mergeSort(v);

    cout<<count<<endl;

    // cout << "Sorted array: ";
    // for (unsigned int i = 0; i < v.size(); i++) {
    //     cout << v[i] << " ";
    // }

    return 0;


}