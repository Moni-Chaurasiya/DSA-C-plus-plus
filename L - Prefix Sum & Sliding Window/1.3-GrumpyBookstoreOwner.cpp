#include<iostream>
#include<vector>
using namespace std;
int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n=customers.size();
        if(n==0) return 0;
        int maxSatisfied=0;
        int maxcustLoss = 0;
        int startIdx=-1;
        for(int i=0;i<=n-minutes;i++){
            int custLoss=0;
            for(int j=i;j<i+minutes;j++){
                if(grumpy[j]==1){
                   custLoss += customers[j];
                }
            }
            if(custLoss > maxcustLoss){
                maxcustLoss=custLoss;
                startIdx=i;
            }
        }
        for(int i=startIdx;i<startIdx+minutes;i++){
            grumpy[i]=0;
        }
        for(int i=0;i<n;i++){
            if(grumpy[i]==0){
              maxSatisfied += customers[i];
            }
        }
        return maxSatisfied;
    }
int main(){
    vector<int> customers={1,0,1,2,1,1,7,5};
    vector<int> grumpy={0,1,0,1,0,1,0,1};
    int minutes=3;
   cout<<maxSatisfied(customers, grumpy, minutes);
}