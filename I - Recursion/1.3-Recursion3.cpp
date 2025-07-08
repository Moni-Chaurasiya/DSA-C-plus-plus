#include<iostream>
#include<string>
#include<vector>
using namespace std;
// Q: Write a recursive function to print all subsets of a given string.

// Given a string, print all possible subsets (including the empty set), where each character has two choices:

// Either include it in the subset

// Or exclude it
void subSet(string original,string str1){
     if(original=="") {
        cout<<str1<<endl;
       return;
     } 
     char ch = original[0];
     subSet(original.substr(1),str1+ch);
      subSet(original.substr(1),str1);
}
void subSet2(string original,string str1,unsigned int idx){
     if(idx==original.length()) {
         cout<<str1<<endl;
       return;
     } 
     char ch = original[idx];
     subSet2(original,str1+ch,idx+1);
     subSet2(original,str1,idx+1);
}
void subSet3(string original,string str1,vector<string>& v){
     if(original=="") {
         v.push_back(str1);
         return;
     } 
     char ch = original[0];
     subSet3(original.substr(1),str1+ch,v);
     subSet3(original.substr(1),str1,v);
}
// To print all subsets of an array. Each element has two choices:

// Exclude it

// Include it

/*
Start with:

printSubset([1, 2], 2, 0, [])
You’re at idx = 0 (element 1). You have two choices:

⚪ Exclude 1

printSubset([1, 2], 2, 1, [])
At idx = 1 (element 2):

⚪ Exclude 2 → printSubset([1, 2], 2, 2, [])

idx == len → print: "" (empty line)

⚫ Include 2 → ans = [2] → printSubset([1, 2], 2, 2, [2])

print: 2

⚫ Include 1 → ans = [1]

printSubset([1, 2], 2, 1, [1])
At idx = 1 (element 2):

⚪ Exclude 2 → printSubset([1, 2], 2, 2, [1])

print: 1

⚫ Include 2 → ans = [1, 2] → printSubset([1, 2], 2, 2, [1, 2])

print: 1 2


These are all 2² = 4 subsets of {1, 2}:

[]

[2]

[1]

[1, 2]

Time Complexity
There are 2ⁿ subsets, so time complexity is:

O(2^n × n)  
Because:

2ⁿ subsets

Each subset may take up to O(n) time to print
*/
void printSubset(int arr[],int len,int idx,vector<int> ans){
     if(idx==len) {
       for(unsigned int i=0;i<ans.size();i++){
         cout<<ans[i]<<" ";
       } 
       cout<<endl;
       return;
     } 
     // Exclude current element
     printSubset(arr,len,idx+1,ans);
     // Include current element
     ans.push_back(arr[idx]);
     printSubset(arr,len,idx+1,ans);

}
//Q: Generate all subsets of a given string such that duplicate consecutive characters are not included more than once unless the first one is included.
void storeSubset(string ans,string original,vector<string>&v,bool flag){
   if(original==""){
      v.push_back(ans);
      return;
   }
   char ch=original[0];
   if(original.length()==1){
      if(flag==true) storeSubset(ans+ch,original.substr(1),v,true);
      storeSubset(ans,original.substr(1),v,true);
      return;
   }
   char dh=original[1];
   if(ch==dh){
      if(flag==true) storeSubset(ans+ch,original.substr(1),v,true);
      storeSubset(ans,original.substr(1),v,false);
   }else{
        if(flag==true) storeSubset(ans+ch,original.substr(1),v,true);
      storeSubset(ans,original.substr(1),v,true);
   }
}

//Q: Given an array of integers, print all subsets of length k using recursion.

void printSubsetLen3(int arr[],int len,int idx,vector<int> ans,unsigned int k){
     if(idx==len) {
      if(ans.size()==k){

       for(unsigned int i=0;i<ans.size();i++){
       
         cout<<ans[i]<<" ";
       
       } 
       cout<<endl;
      }
       return;
     } 

     if(ans.size()+(len-idx)<k)  return;
     printSubsetLen3(arr,len,idx+1,ans,k);
     ans.push_back(arr[idx]);
     printSubsetLen3(arr,len,idx+1,ans,k);

}

// print all possible arrangements (permutations) of the letters in a string.
void permutation(string original,string str1){
     if(original=="") {
         cout<<str1<<endl;
         return;
     } 

       for(unsigned int i=0;i<original.length();i++){
         char ch = original[i];
         string ah=original.substr(0,i);
         string bh=original.substr(i+1);
        


         permutation(ah+bh,str1+ch);
         
       }


}



int main(){
    string original="Miss";
    string str1="";
    vector<string> v;
    subSet(original,str1);
    cout<<endl;
    subSet2(original,str1,0);
    cout<<endl;
    subSet3(original,str1,v);

    for(string ele:v){
        cout<<ele<<endl;
    }

    int arr[]={1,2,3};
    vector<int> n;
    int len=sizeof(arr)/sizeof(arr[0]);
    printSubset(arr,len,0,n);

    string str ="aab";
    vector<string> vv;
    storeSubset("",str,v,true);
    for(unsigned int i=0;i<v.size();i++){
      cout<<v[i]<<endl;
    }

    int subArr[]={1,2,3,4,5};
    vector<int> n1;
    int l=sizeof(subArr)/sizeof(subArr[0]);
    int k=3;
    printSubsetLen3(subArr,l,0,n1,k);
   cout<<endl;


   string original2="abc";
   permutation(original2,str1);

}