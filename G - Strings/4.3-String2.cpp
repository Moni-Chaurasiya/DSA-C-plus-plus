#include<iostream>
#include<string>
using namespace std;
int main(){

    //count no of vowels in string
    string s= "mOni";
    int count =0;
    int i = 0;
    while(s[i]!='\0'){
        if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u'||s[i]=='A'|| s[i]=='E'|| s[i]=='I'|| s[i]=='O'|| s[i]=='U')

        count++;
        
        i++;
    }
    cout<<count<<endl;

    //string in c++ are mutable
    string str ="Moni";
    cout<<str<<endl;
    str[3]='a';
    cout<<str<<endl;

    //Taking input from user
    int n;
    cout<<"Enter size of string"<<endl;
    cin>>n;
    string st[n];
    cout<<"Enter string:"<<endl;
    for(int i=0; i<n;i++){
        cin>>st[i];
    }
    for(int i=0; i<n;i++){
        cout<<st[i];
    }
    cout<<endl;
    string surname="Chaurasiya";
    for(int i=0;surname[i]!='\0';i++){
        if(i%2==0) surname[i]='m';
    }
    cout<<surname<<endl;
}