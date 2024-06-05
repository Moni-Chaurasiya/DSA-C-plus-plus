#include<iostream>
#include<string>
#include<vector>
using namespace std;

void subArray(vector<int> v,int arr[],int len,int idx){
    if(idx==len){
        for(int i=0;i<v.size();i++){
            cout<<v[i];
        }
        cout<<endl;
        return;
    }
    subArray(v,arr,len,idx+1);
    if(v.size()==0||arr[idx-1]==v[v.size()-1]){
    v.push_back(arr[idx]);
    subArray(v,arr,len,idx+1);
    }
    
}
bool isPalindrone(string str){
    int i= 0;
    int j= str.length()-1;
    while(i<j){
        if(str[i]!=str[j])  return false;
        if(str[i]==str[j]){
            i++;
            j--;
        }
    } 
    return true;
}
bool isPalindrone(string str,int i,int j){
        if(i>j) return true;
        if(str[i]!=str[j])  return false;
        else return isPalindrone(str,i+1,j-1);
}
int HCF(int a,int b){
  for(int i=2;i<min(a,b);i++){
        if(a%i ==0 && b%i==0){
            return i;
        }
    }
    return 1;
}
int GCD(int a,int b){

  if(a==0) return b;  
 else return  GCD(b%a,a);
}

void generate01(string s,unsigned int n){
    if(s.length()==n) {
    cout<<s<<endl;
    return;
    }
     generate01(s+'0',n);
     generate01(s+'1',n);
}
void generate010(string s,unsigned int n){
    if(s.length()==n) {
    cout<<s<<endl;
    return;
    }
    
          generate010(s+'0',n);
    if(s==""||s[s.length()-1]=='0'){
    
     generate010(s+'1',n);
    }
}
int main(){
    int arr[]={1,2,3,4};
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len;i++){
        for( int j=i;j<len;j++){
            for( int k=i;k<=j;k++){
                cout<<arr[k];
            }
            cout<<endl;
        }
    }
    vector<int> v;
    subArray(v,arr,len,0);

    string str="moom";
    cout<<  isPalindrone(str);
    cout<<endl;
    cout<<  isPalindrone(str,0, str.length()-1);
    cout<<endl;
    int a=27;
    int b=45;
    cout<<"HCF of 24 and 60 is "<<HCF(a,b)<<endl;
    cout<<"HCF of 24 and 60 is "<<GCD(a,b)<<endl;
    
    cout<<endl;
    int n=4;
    generate01("",n);
    cout<<endl;
    generate010("",n);

    

}
