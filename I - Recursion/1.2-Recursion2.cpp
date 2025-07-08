#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
//Q: Write a recursive function to remove all occurrences of the character 'a' from a given string and print the resulting string.
void removeChar(string ans,string original){
    int len= original.length();
    if(len==0) {
      cout<<ans;
        return;
     }
    char ch = original[0];
    if(ch=='a') removeChar(ans,original.substr(1));
    else removeChar(ans+ch,original.substr(1));

}
void removeCharacter(string ans,string original, unsigned int idx){

    if( idx == original.size()) {
      cout<<ans;
        return;
     }
    char ch = original[idx];
    if(ch=='a') removeCharacter(ans,original,idx+1);
    else removeCharacter(ans+ch,original,idx+1);

}
void removeOnce(int arr[],int original[],unsigned int  originalSize,unsigned int idx=0,unsigned int arridx=0){

    if( idx == originalSize) {
    
      for(unsigned int i=0;i<arridx;i++){
        cout<<arr[i]<<" ";
      }
      cout<<endl;
        return;
    }
    int Fnumber = original[idx];
    if(Fnumber==1){ 
      removeOnce(arr,original,originalSize,idx+1,arridx);
    }else{ 
       arr[arridx]=original[idx];
       removeOnce(arr,original,originalSize,idx+1,arridx+1);
    }
}

void hanoi(int n,char a,char b,char c){
    if(n==0) return;
    hanoi(n-1,a,c,b);
    cout<<a<<" -> "<<c<<endl;
    hanoi(n-1,b,a,c);
}
void printArray(int ar[],int len ,int idx){
     if(idx==len) return ;
    
       cout<<ar[idx]<<" ";
       printArray(ar,len,idx+1);
     

}
void display(vector<int>& v ,unsigned int idx){
     if(idx==v.size()) return ;
       
       cout<<v[idx]<<" ";
       display(v, idx+1);
}

void maxValue(int ar[],int len,int idx,int max){
      if(idx==len) {
       cout<<max; 
        return ;
      }
      //  int max=ar[0];
       if(ar[idx]>max){
        max=ar[idx];
       }
       maxValue(ar,len,idx+1,max);
}

int maxInArray(int ar[],int len,int idx){
      if(idx==len)  return INT16_MIN;
      return max(ar[idx],  maxInArray(ar,len,idx+1));
}

int main(){
    string str="Moni Chaurasiya";
    removeChar("",str);
    cout<<endl;

    removeCharacter("",str,0);
    cout<<endl;

    int original[]={1,5,7,4,1,1,8};
    int originalSize= sizeof(original)/sizeof(original[0]);
    int arr[originalSize]={};
    int idx=0;
    removeOnce(arr,original,originalSize,idx);

    int n=3;
    hanoi(n,'A','B','C');

    int ar[]={ 1,2,31,4,5,6};
    int len= sizeof(ar)/sizeof(ar[0]);
    printArray(ar,len,0);
    cout<<endl;

    vector<int> v(len);
    for(int i=0;i<len;i++){
      v[i]=ar[i];
    }
    display(v,0);
    cout<<endl;
    maxValue(ar,len,0,INT16_MIN);
    cout<<endl;
    cout<<maxInArray(ar,len,0);


}