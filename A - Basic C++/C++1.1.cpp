#include<iostream>
using namespace std;
int main(){

    //Find wheather a number is three digit or not
    cout<<"Find wheather a number is three digit or not"<<endl;
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    if(n>=100 && n<=999){    // Note:- If condition first is false than computer won't check condition 2
        cout<<"Three digit number"<<endl;
    }else{
        cout<<"Not a three digit number"<<endl;
    }

    //wheather a number is divisible by 3 or 5 and not by 15
    cout<<"wheather a number is divisible by 3 or 5 and not by 15"<<endl;
    int m;
    cout<<"Enter a number: "<<endl;
    cin>>m;
    if((m%3==0 || m%5==0) && m%15!=0){     // Note:- If condition first is true than computer won't check condition 2
        cout<<"Number is divisible by 3 or 5 and not by 15"<<endl;
    }else{
        cout<<"Number is not divisible by 3 or 5 "<<endl;
    }

    //Find greatest number from three number
    cout<<"Find greatest number from three number"<<endl;
    int a, b, c;
    cout<<"Enter first number:"<<endl;
    cin>>a;
       cout<<"Enter second number:"<<endl;
    cin>>b;
       cout<<"Enter third number:"<<endl;
    cin>>c;
    if(a>b && a>c){
        cout<<a<<" is greatest number"<<endl;
    }
     if(b>a && b>c){
        cout<<b<<" is greatest number"<<endl;
    }
    if(c>a && c>b){
        cout<<c<<" is greatest number"<<endl;
    }

    //wheather a char is alphabet or not 
    cout<<"  wheather a char is alphabet or not "<<endl;
    char ch;
    cout<<"Enter any variable:"<<endl;
    cin>>ch;
    int d = (int)ch;
    if( d>=65 && d<=90){
        cout<<"Character is an uppercase alphabet"<<endl;
    }
    else if( d>=97 && d<=122){
        cout<<"Character is an lowercase alphabet"<<endl;
    }else{
        cout<<"Character is not an alphabet"<<endl;
    }



   //  Wheater a number is  Armstrong or not
   int x;
   cout<<"Enter number : "<<endl;
   cin>>x;
   int arm=0;
   int x1 = x;
   while(x!=0){
    int y=x%10;
    arm=arm+(y*y*y);
    x=x/10;
   }
   if(arm==x1){
   cout<<"Number is Armstrong"<<endl;
   }else{
    cout<<"Number is not a Armstrong number"<<endl;
   }
 return 0;
}