#include<iostream>
#include <cmath>
using namespace std;
int main(){
  
    // Print Factorial of number
    cout<<"Print Factorial of number"<<endl;
    int n; 
    cout<<"Enter a number:"<<endl;
    cin>>n;
    int fact=1;
    for(int i=1; i<=n; i++){
        fact = fact*i;
    }
    cout<<fact<<endl;
             //OR
    cout<<"Print Factorial of number"<<endl;
    int m; 
    cout<<"Enter a number:"<<endl;
    cin>>m;
    int fact1=1;
    for(int i=m; i>=1; i--){
        fact1 = fact1*i;
    }
    cout<<fact1<<endl;

    cout<<"Print Factorial of number"<<endl;
    cout<<"Enter a number:"<<endl;
    cin>>m;
    for(int i=1; i<=m;i++){
     int Fact=1;
     for (int j=1; j<=i;j++){
      Fact = Fact * j;
     }
    cout<<"Factorial of "<<i<<"is"<<Fact<<endl;
    }
  
//Print the nth fibonacci number
    int x;
    cout<<"Enter number :"<<endl;
    cin>>x;
    int fibo = 0;
    int a=1;
    int b=1;
    for(int i=1; i<=x-2 ; i++)  {
            fibo= a+b;
            a=b;
            b=fibo;
    }
    cout<<b<<" ";
 
 //Power of a number
  cout<<"Power of a number"<<endl;
  int p;
  int q;
  cout<<"Enter base:"<<endl;
  cin>>p;
  cout<<"Enter exponent:"<<endl;
  cin>>q;
  bool flag = true;
  if(q<0){
    flag = false;
    q=-q;
  }
  float power=1;
  for(int i=1;i<=q;i++){
    power=power*p;
  }
  if(flag==false){
    power=1/power;
    q=-q;
  }
  if(p==0 && q==0) cout<<"Not Defined"<<endl; 
  else  cout<<power<<endl;
   
   
    return 0;

  }