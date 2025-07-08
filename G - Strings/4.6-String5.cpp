#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    // string s;
    // getline(cin,s);
    // sort(s.begin(),s.end());
    // cout<<s<<endl;

    //Check wheather two strings are anagram  
    //If after sorting two strings and sorted string is same than it is called anagram 

    string st;
    string str;
    cout<<"Enter first String:"<<endl;
    cin>>st;
    cout<<"Enter second String:"<<endl;
    cin>>str;
    sort(st.begin(),st.end());
    sort(str.begin(),str.end());
    cout<<st<<endl;
    cout<<str<<endl;
    if(st==str){
        cout<<"Strings are anagram"<<endl;
    }else{
        cout<<"Strings are not anagram"<<endl;
    }

    // Print the character that is occuring most number of times

string a;
cout<<"Enter String"<<endl;
cin>>a;
int ln= a.length();
int mostch= 0;
int c=1;
sort(a.begin(),a.end());
for(int i=0;i<ln-1;i++){
    if(a[i]==a[i+1]){ //error
        c++;
    }else{
        if(mostch<c){
            mostch=c;
            c=1;
        }
    }
}
if(mostch<c){
    mostch=c;
}
cout<<"Most number of times occuring characters "<<mostch<<endl;

    // Print the character that is occuring most number of times
    string s;   
    cout<<"Enter first String:"<<endl;
    cin>>s;
    int len= s.length();
    int maxCount=0;
    for(int i=0; i<len;i++){
        char ch =s[i];
        int count=1;
        for(int j=i+1; j<len;j++){
        if(s[i]==s[j]){
            count++;
            
        }
       }

       if(maxCount<count) maxCount=count;
       if(count==maxCount){
        cout<<ch<<" "<<maxCount<<endl;
       }
    }
    cout<<"Max Occur ="<<maxCount<<endl;


    //different method to solve this 
    string t="leetcode";
    int l= t.length();
    vector<int> arr(26,0);
    for(int i=0;i<l;i++){
        char c = t[i];
        int ascii=(int)c;
        arr[ascii-97]++;
    }
    int mx=0;
    for(int i=0;i<26;i++){
        if(arr[i]>mx) mx=arr[i];

    }
    for(int i=0;i<26;i++){
        if(arr[i]==mx){
            int ascii=i+97;
            char cha=(char)ascii;
            cout<<cha<<" "<<mx<<endl;
        }

    }

}