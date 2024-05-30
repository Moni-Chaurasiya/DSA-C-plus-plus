#include<iostream>
using namespace std;


int a=6;  // Globle scope   and all function can access this value

void fun(int a, int b){    //formal parameter
 
  cout<<a<<" "<<b<<endl;

}

void func(int x =1, int y=2){  //If you are giving default value than you have to give to all variable you can not give to only x aor only y

 cout<<x<<" "<<y<<endl;

}
void f(){
    cout<<a<<endl;
}
int gcd(int p , int q){
    int hcf =1;
    // for(int i=1; i<=min(p,q);i++){
          //OR
    for(int i=min(p,q) ; i>=1 ; i--){   
        if(p%i==0 && q%i==0){
            hcf = i;
            break;
        }
    }
    return hcf;
}

int swap(int u,int v){
  int   t = u;    
     u = v;
     v = t;
     return 0;
}
int main(){
    // fun(x,y);    // Actual Parameter
    // int a = 5;   //Local scope
    cout<<a<<endl;   //6
    a=5; //It will change the value of global variable a
    cout<<a<<endl;   //5
    f();   //5
    // fun(); //Give error 
    fun(3 ,4 );
    func();
    func(8,9);
    func(9);

    int p;
    cout<<"Enter first number: ";
    cin>>p;
    int q;
    cout<<"Enter 2nd number: ";
    cin>>q;
    cout<<gcd(p,q)<<endl;

 // swap two number
    int r,s;
    // int t;
    cout<<"Enter value of r :"<<endl;
    cin>>r;
    cout<<"Enter value of s :"<<endl;
    cin>>s;
    // t = r;     //Using third variables
    // r = s;
    // s = t;

         //OR
    r = r+s;       // Without using third variables 
    s = r-s;
    r = r-s;
    cout <<"r = "<<r<<" "<<"s = "<<s<<endl;
    

    int u,v;
    cout<<"Enter value of u :"<<endl;
    cin>>u;
    cout<<"Enter value of v :"<<endl;
    cin>>v;
    swap(u,v); 
    cout <<"u = "<<u<<" "<<"v = "<<v<<endl;
  // In this case we can not swap because these variable is different
               // and this is known as pass by value and not pass by reference
}

//Note:- If we are using void while declaring the function the we have to use cout
//       If we are using int,float... while declaring the function the we have to use return 