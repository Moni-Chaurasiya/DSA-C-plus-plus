#include<iostream>
#include<string>
#include<vector>
using namespace std;
void combination(vector<int> v,int arr[],int n,int target,int idx){
    if(target ==0){
        for(unsigned int i=0;i<v.size();i++){
          cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    if(target<0) return;
    for(int i=idx;i<n;i++){
        v.push_back(arr[i]);
        combination(v,arr,n,target-arr[i],i);
        v.pop_back();

    }

}

void generate(string s,int open,int close,int n){
    if(close==n){
        cout<<s<<endl;
        return;
    }
    if(open<n)  generate(s+'(',open+1,close,n);
    if(close<open)  generate(s+')',open,close+1,n);

}

    string getPermutation(int n, int k) {
        int fact=1;
        vector<int> nums;
        for(int i=1;i<n;i++){
            fact=fact*i;
            nums.push_back(i);
        }
        nums.push_back(n);
        string str="";
        k=k-1;
        while(true){
            str+=to_string(nums[k/fact]);
            nums.erase(nums.begin()+k/fact);
            if(nums.size()==0) break;
            k=k%fact;
            fact=fact/nums.size();
        }
        return str;
    }
int main(){
    int arr[]={2,3,5};
    vector<int> v;
    int n=sizeof(arr)/sizeof(arr[0]);
    combination(v,arr,n,8,0);

    cout<<endl;

    string s ="";
  
    int m=3;
    generate(s,0,0,m);
    int x=4;
    int k=5;
    getPermutation( x, k);

}