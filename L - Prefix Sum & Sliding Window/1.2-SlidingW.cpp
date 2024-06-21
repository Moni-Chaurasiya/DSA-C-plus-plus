#include<iostream>
using namespace std;
int main(){
    //Maximum sum Subarray of size k
    int  arr[]={7,1,2,5,8,4,9,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int maxSum=INT8_MIN;
    int idx=-1;
    for(int i=0;i<=n-k;i++){
        int sum=0;
        for(int j=i;j<i+k;j++){
           sum+=arr[j];
        }
        if(sum>maxSum){
            maxSum=sum;
            idx=i;
        }
    }
    //Time Complexity is O(n*k)
    cout<<maxSum<<endl;
    cout<<"Index is "<<idx<<endl;

    // let us use sliding window algorithm
    int currSum=0;
    int prevSum=0;
    for(int i=0;i<k;i++){
        prevSum += arr[i];

    }
    int mxSum=prevSum;
    int p=1;
    int q=k;
    while(q<n){
        currSum=prevSum-arr[p-1]+arr[q];
       if(currSum>mxSum){
            mxSum= currSum;
            idx=p;
        }
        prevSum=currSum;
     p++;
     q++;
    }
    cout<<mxSum<<endl;
    cout<<"Index is "<<idx<<endl;
}