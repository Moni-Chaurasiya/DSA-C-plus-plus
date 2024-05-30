#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& nums1,  vector<int>& nums2, vector<int>& nums3) {
        
        int i=0;
        int j=0;
        for(unsigned int k=0;k<nums3.size();k++){
            if(nums1[i]>=nums2[j]){
                nums3[k]=nums2[j];
                j++;
                
            }
            else if(nums2[j]>=nums1[i]){
                nums3[k]=nums1[i];
                i++;
            }
        }
        return;
 }
int main(){
    vector<int> nums1;
    nums1.push_back(1);
    nums1.push_back(5);
    nums1.push_back(9);
    nums1.push_back(12);
    nums1.push_back(35);

    vector<int> nums2;
    nums2.push_back(12);
    nums2.push_back(18);
    nums2.push_back(24);
    nums2.push_back(29);
    nums2.push_back(35);
    nums2.push_back(49);
    nums2.push_back(52);

    for(unsigned int i=0; i<nums1.size(); i++){
        cout<<nums1[i]<<" ";
    }
    cout<<endl;

    for(unsigned int i=0; i<nums2.size(); i++){
        cout<<nums2[i]<<" ";
    }
    cout<<endl;

    vector<int> nums3(nums1.size()+ nums2.size());
    // cout<<sizeof(nums3)<<endl;
    merge(nums1 , nums2 , nums3);
    

    for(unsigned int i=0; i<nums3.size(); i++){
        cout<<nums3[i]<<" ";
    }
    cout<<endl;
}