// #include<iostream>
// #include<vector>
// using namespace std;

// void merge(vector<int>& nums1,  vector<int>& nums2, vector<int>& nums3) {
        
//         int i=0;
//         int j=0;
//         for(unsigned int k=0;k<nums3.size();k++){
//             if(nums1[i]>=nums2[j]){
//                 nums3[k]=nums2[j];
//                 j++;
                
//             }
//             else if(nums2[j]>=nums1[i]){
//                 nums3[k]=nums1[i];
//                 i++;
//             }
//         }
//         return;
//  }
//  void mergeSort(vector<int>& v){
//      int n= v.size();
//      int n1=n/2;
//      int n2= n - (n/2);
//      vector<int> nums1(n1);
//      vector<int> nums2(n2);
//      //copy pasting
//      for(int i=0;i<n1;i++){
//         nums1[i]=v[i];
//      }
//      for(int i=0;i<n2;i++){
//         nums2[i]=v[i+n1];
//      }
//      mergeSort(nums1);
//      mergeSort(nums2);

//      merge(nums1,nums2,v);
//  }
// int main(){
//     int arr[]={5,3,1,6,7,3};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     vector<int> v(arr,arr+n);
//     for(unsigned int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     mergSort(v);
//     for(unsigned int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }   
// }





#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
    int i = 0, j = 0, k = 0;

    while (i < nums1.size() && j < nums2.size()) {
        if (nums1[i] <= nums2[j]) {
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

    merge(nums1, nums2, v); // Merge sorted halves
}

int main() {
    int arr[] = {5, 3, 1, 6, 7, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> v(arr, arr + n);

    cout << "Original array: ";
    for (unsigned int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    mergeSort(v);

    cout << "Sorted array: ";
    for (unsigned int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}