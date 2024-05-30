#include<iostream>
#include<vector>
using namespace std;
void reversePart(int x, int y, vector<int>& nums){
       while(x<=y){
            int t=nums[x];
            nums[x]=nums[y];
            nums[y]=t;
            
            y--;
            x++;

       }
       return;
   }

int main(){
    vector<int> nums;
    int n;
    cout<<"Enter size of array:"<<endl;
    cin>>n;
    cout<<"Enter element of array:"<<endl;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        nums.push_back(q) ;
    }

    for(unsigned int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }

    cout<<endl;

    int k;
    cout<<"Enter number of rotation you want:"<<endl;
    cin>>k; 


    reversePart(0,nums.size()-1-k,nums);
    reversePart(nums.size()-k,nums.size()-1,nums);
    reversePart(0,nums.size()-1,nums);

    cout<<endl;

    for(unsigned int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }



}