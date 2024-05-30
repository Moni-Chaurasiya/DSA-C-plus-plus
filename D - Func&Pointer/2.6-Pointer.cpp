#include<iostream>
using namespace std;
void find(int n, int* n1, int* n2){

  *n2=n%10;
   while(n>9){
    n=n/10;
   }  
   *n1= n;
  return ;
}
int main(){
  
    cout<<sizeof(int)<<endl;   //4
    cout<<sizeof(float)<<endl;  //4
    cout<<sizeof(double)<<endl;  //8
    cout<<sizeof(char)<<endl;   //1
    cout<<sizeof(long long)<<endl;   //8
    int x = 15;
    int* p = &x;  //This pointer can only hold address of int variable
 //   int* p = x ;    //It will give error because only address can be store in pointer
    cout<<*p<<endl;   //output will be 15 It will give value of variable whose address  is stored in *p 

    float y = 15;
    float* q = &y;
    cout<<y<<endl;
    *q = 6;
    cout<<y<<endl;
    cout<<&x<<endl; // Each time address will be different when we run
    cout<<p<<endl;
    cout<<&p<<endl;

    cout<<&y<<endl; 
    cout<<q<<endl;
    cout<<&q<<endl;

//Sum of two number using pointer
cout<<"Sum of two number using pointer"<<endl;
  int a;
  int *p1=&a;
  cout<<"Enter first number:"<<endl;
//  cin>>a;
  cin>>*p1;

  int b;
  int *p2=&b;
  cout<<"Enter first number:"<<endl;
//  cin>>b;
  cin>>*p2;
  cout<<*p1+*p2<<endl;

//Syntax Error
/*   int *p,q; --> p will be int pointer and q will be integer in this case.
     
*/
// Function to find first and last digit of a number without returning anything
   int n;
   cout<<"Enter number:"<<endl;
   cin>>n;
   int firstDigit, lastDigit;
  //  lastDigit=n%10;
  //  while(n>9){
  //   n=n/10;
  //  }
  //  firstDigit=n;
  int* n1=&firstDigit;
  int *n2=&lastDigit;

  find(n, n1, n2);
   cout<<"firstDigit:"<<firstDigit<<" "<<"lastDigit:"<<lastDigit<<endl;


   int * ptr=NULL;
   cout<<ptr<<endl; //0
   int *m= NULL;
   cout<<m<<endl;     //0
   cout<<&ptr<<endl;
   int* r= 0;
   cout<<r<<endl;
  int* s= '\0';
   cout<<s<<endl;  


 /*  int u=15;
   int* ptr =&u;
   int** p = &ptr;
   cout<<u<<endl;
   cout<<ptr<<endl;
   cout<<*ptr<<endl;
   cout<<**p<<endl;
   cout<<&u<<endl;
   cout<<&ptr<<endl;
   cout<<&p<<endl;*/

}