#include<iostream>
#include <string>
using namespace std;
int main(){

//Count digit of a given number
  cout<<"Count digit of a given number"<<endl;  

    int n;
    cout<<"Enter number:"<<endl;
    cin>>n;
    string m= to_string(n);
    // for(int i=1; i<=length(n); i++){
    //     cout<<i<<endl;
    // }
    int length = m.length();
    cout<<length <<endl;


              //OR
   cout<<"Count digit of a given number"<<endl;     
   
 
    int x;
    cout<<"Enter number:"<<endl;
    cin>>x;
    int count =0;
    int a= x; 
    while(x!=0){
     x = x/10;
    
    count++;
    }
    if(a==0) cout<<1;
    else    cout<<"length of digit is "<<count<<endl;
   

// Sum of digit
   cout<<"sum of a given number"<<endl;     
   
    int y;
    cout<<"Enter number:"<<endl;
    cin>>y;
    int sum=0;
    int last=0;
    while(y>0){
    last = y%10;
    sum=sum+last ;
    y=y/10;
    
   
    }
  cout<<sum<<endl;


 // Print reverse of a given number
    cout<<"Print reverse of a given number"<<endl;
    int b;
    cout<<"Enter a number:"<<endl;
    cin>>b;
    int c;
    int r=0;
    while(b !=0){
      c = b%10;
      b = b/10;
      r = r*10+c;  // Multiply first than add
    } 
    cout<<r<<endl;


//Print sum of first n numder
    cout<<"Print sum of first n numder"<<endl;
    int s;
    cout<<"Enter a number:"<<endl;
    cin>>s;
    int sum1=0;
    for(int i=1;i<=s; i++){
       sum1=sum1+i;
    }
    cout<<sum1<<endl;


//Sum alternate
    cout<<"Sum alternate"<<endl;
    int z;
    cout<<"Enter a number:"<<endl;
    cin>>z;
    int sum2=0;
    for(int i=1;i<=z; i++){
    if(i%2==0){
       sum2=sum2-i;
    }else{
      sum2=sum2+i;
    }
    }
    cout<<sum2<<endl;

    //OR
     int p;
    cout<<"Enter a number:"<<endl;
    cin>>p;
    int sum3=0;
    
    if(p%2==0) sum3 = -p/2;  //(1-2)+(3-4)+(5-6)+...  = (-1) + (-1) + (-1) +...
    if(p%2!=0) sum3 = -p/2 + p;  //(1-2)+(3-4)+(5-6)+7... = (-1) + (-1) + (-1) + 7...
    cout<<sum3<<endl;

    return 0;
}