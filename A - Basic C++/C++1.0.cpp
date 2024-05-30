#include<iostream>
using namespace std;
int main(){
    char ch = 'A';
    char x = 'a';
    char y = '0';
    cout<<(int)ch<<endl;  // ASCII values A-->65  ,  a-->97  ,  '0'-->48
    cout<<(int)x<<endl; 
    cout<<(int)y<<endl; 

    //Typecasting 
    cout<<"Typecasting"<<endl;
    float n = 7.9;
    int m = 7;
    cout<<(int)n<<endl;
    // We can convert integer into character like this 
    char a = static_cast<char>(m);
    cout<<a<<endl;
    bool p = true;
    cout<<p+8<<endl;
    char q = 'M';
    int z = (int)q;
    cout<<z<<endl;
    cout<<z-64<<endl;
 //Q-1- Take integer as input and print half of the number
  cout<<"Q-1- Take integer as input and print half of the number"<<endl;
    int c;
    cin>>c;
    float d = (float)c;
    cout<<d/2<<endl;

//Q-2- Take float input and print the fractional part   
  cout<<"Q-2- Take float input and print the fractional part "<<endl;
    float e;
    cout<<"Enter the float number :";
    cin>>e;
    int f = (int)e;
    if(f<0) f=f-1;
    float g = e-f;
    cout<<g<<endl;

    int r = 4;
    int s = 5;
    r++, s--;
    cout<< ++r << " " <<s--<<endl;

    int  t; 
    cout<<"Enter the an integer :"<<endl;
    cin>>t;
    if(t>0 || t==0){
        cout<<t;
    }
    else{
        cout<<-t;
    }
}