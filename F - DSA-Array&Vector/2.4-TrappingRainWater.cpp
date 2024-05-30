
//LeetCode 42

class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int pre[n];
        pre[0]=-1;
        int max=height[0];
        for(int i=1;i<=n-1;i++){
            pre[i]=max;
            if(height[i]>max){
                max=height[i];
            }
            
        }

        int next[n];
        next[n-1]=-1;
        int Nmax=height[n-1];
        for(int i=n-2; i>=0;i--){
            next[i]=Nmax;
            if(height[i]>Nmax){
                Nmax=height[i];
            }
        }
        int arr[n];
        for(int i=0; i<=n-1;i++){
          if(pre[i]<=next[i]){
            arr[i]=pre[i];
          }else{
            arr[i]=next[i];
          }
        }
        int unit=0;
        int d;
        for(int i=1;i<n-1;i++){
        if(height[i]<arr[i]){
           d=arr[i]-height[i];
           
            unit=unit+ d;
        }
        }
        return unit;
        
    }
};