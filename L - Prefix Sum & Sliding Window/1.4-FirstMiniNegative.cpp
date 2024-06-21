#include<iostream>
#include<vector>
using namespace std;
void firstNegative(vector<int>& arr, vector<int>& ans, int windowSize) {
        int n=arr.size();
          if (n == 0) return;
          ans.resize(n - windowSize + 1);
        int p=-1;
        for(int i=0;i<n;i++){
            if(arr[i]<0){
                p=i;
                break;
            }
        }
        if(p==-1) ans[0]=1;
        else ans[0]=arr[p];
        int i=1;
        int j=windowSize;
        while(j<n){
            if(p>=i) ans[i]=arr[p];
            else{
                for(int x=i;x<=j;x++){
                    if(arr[x]<0){
                        p=x;
                        break;
                    }
                }
                if(p!=-1) ans[i]=arr[p];
                else ans[i]=1;
            }
            i++;
            j++;
        }
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
   
    }
int main(){
    vector<int> arr={2,-3,4,4,-7,-1,4,-2,6};
     for(unsigned int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
     }
     cout<<endl;
    vector<int> ans;
    int windowSize=3;
    firstNegative(arr, ans, windowSize);
}