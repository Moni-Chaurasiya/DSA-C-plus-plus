#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str= "My name is Moni";
    cout<<str.length();
    str.push_back('i');  //It can only push character not string
    str.push_back('c');
    str.push_back('a');
    cout<<str<<endl;
    str.pop_back();
    cout<<str<<endl;

    string s = "abc";
    cout<<s<<endl;
    string m = "xyz";
    cout<<m<<endl;
    s=s+m;            //abcxyz
    cout<<s<<endl;
    s=s+"123";        //abcxyz123  
    cout<<s<<endl;
    s="pqr"+s;
    cout<<s<<endl;    //pqrabcxyz123
    reverse(s.begin(),s.end());
    cout<<s<<endl;                 //321zyxcbarqp
    reverse(s.begin()+2,s.end());
    cout<<s<<endl;                 //32pqrabcxyz1
    reverse(s.begin(),s.end()-3);
    cout<<s<<endl;                 //xcbarqp23yz1

    int len=s.length();
    reverse(s.begin(),s.begin()+len/2);     //qrabcxp23yz1
    //length is 12 length/2 is 6 and it will reverse till index 5 
    cout<<s<<endl;

    //Substring

  
    cout<<s.substr(3)<<endl; //3 is starting index it will print from 1 to last index 
    cout<<s.substr(10)<<endl; // 10 is starting index
    cout<<s.substr(5,4)<<endl;  // starting index is 5 and length of string is 4 

    //to_String()
    int n=10;
    string t = to_string(n);
    cout<<n<<endl;
    cout<<t.length()<<endl;
}