#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

    // Sort the string in the decreasing order of values associated after removal of values smaller than X
    string s= "AZYZXBDJKX";
    string str="";
    int n= s.length();
    for(int i=0;i<n;i++){
        char ch = s[i];
        int x=(int)ch;
        if(x>=88){
            str += ch;

        }
    }
    // sort(str.begin(),str.end());  // Time Complexity of Inbuilt Sort -->O(n.logn)
    // cout<<str<<endl;
    // reverse(str.begin(),str.end());
    // cout<<str<<endl;

    //Sort using bubble sort
    int m = str.length();
    bool flag=true;
    for(int i=0;i<m-1;i++){
        for(int j=0;j<m-1-i;j++){
            if(str[j]>str[j+1]){
                swap(str[j],str[j+1]);
                  flag=false;
            }
        }
        if(flag==true) break; 
    }
    cout<<str<<endl;

    //Push zeroes to end while maintaining the relative order of other elements
    int arr[9]={5,0,1,2,0,0,4,0,3};
    int p=9;

   
    bool flag1=true;
    for(int i=0;i<p-1;i++){
        for(int j=0;j<p-1-i;j++){
            if(arr[j]==0){
                swap(arr[j],arr[j+1]);  
                  flag1=false;
            }
        }
        if(flag1==true) break; 
    }
    for(int i=0;i<p;i++){
        cout<<arr[i]<<" ";
    }

    

}




