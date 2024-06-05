#include<iostream>
#include<string>
#include<vector>
using namespace std;

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
void printSubset(int arr[],int len,int idx,vector<int> ans){
     if(idx==len) {
       for(unsigned int i=0;i<ans.size();i++){
         cout<<ans[i]<<" ";
       } 
       cout<<endl;
       return;
     } 
     printSubset(arr,len,idx+1,ans);
     ans.push_back(arr[idx]);
     printSubset(arr,len,idx+1,ans);

}

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
    subSet2(original,str1,0);
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