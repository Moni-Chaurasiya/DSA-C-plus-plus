  // Two Sum
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int target;
    cout<<"Enter target number:"<<endl;
    cin>>target;
    vector<int> nums;
    int n;
    cout<<"Enter array size:"<<endl;
    cin>>n;

    cout<<"Enter array element:"<<endl;

    for(int i=0; i<n;i++){
        int q;
        cin>>q;
        nums.push_back(q) ;
    } 

 
    for(unsigned int i=0;i<=nums.size()-1;i++){
        for(unsigned int j=i+1;j<=nums.size();j++){
            if(nums[i]+nums[j]==target){
                cout<<"("<<i<<","<<j<<")";
            }
        }
    }
    
}