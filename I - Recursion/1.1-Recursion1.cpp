// What and Why?
/*
What ? --> Recursion replace loop
           problem = Something + subProblem
       --> Function Calling itself    
Why ? -->  To solve problems 
*/
#include<iostream>
using namespace std;
void greet(int n){
    if(n==0) return;
    cout<<"Good Morning"<<endl;
    cout<<"How are you"<<endl;
    // greet();  --> Segmentation fault 
    greet(n-1);
}
int product(int a,int b){
    return a*b;
}

int fact(int n){
    int f=1;
    for(int i=2;i<=n;i++){
        f=f*i;
    }
    return f;
}

int factupto(int n){
    for(int j=1;j<=n;j++){
    int f=1;
    for(int i=2;i<=j;i++){
        f=f*i;
    }
    cout<<j<<" "<<f<<endl;
    }
    return 0;
}
int factRec(int n){
    //base case
    if (n==1||n==0) return 1;
  return n*factRec(n-1);
  
}
int print(int n){
    if (n==0) return 1; //base case
    cout<<n<<endl;
    return print(n-1);
}
int prints(int n,int m){
    if (n==m+1) return 0; //base case
    cout<<n<<endl;
    return prints(n+1,m);
}
void printss(int n){
    if (n==0) return; //base case
    printss(n-1);
    cout<<n<<endl;
}
int sum(int n){
    if (n==0) return 0;
  return n+sum(n-1);

}
void su(int s ,int n){
    if(n==0) {
    cout<<s<<endl;
        return ;
    }
    su(s+n, n-1);
}
void squr(int n, int m){
    if(m==0){
         return ;
    }
    cout<<n<<endl;
     squr(n*n,m-1);


}
int power(int n, int m){
    if(m==0){
         return 1;
    }

   
 return  n*power(n,m-1);

}

void fibo(int n){
    int a,b,sum;
    a=1;
    b=1;
    cout<<a<<endl<<b<<endl;
    for(int i=1;i<=n-2;i++){
     sum=a+b;
     a=b;
     b=sum;
     cout<<sum<<endl;
    }

}
int fib( int n){
    if(n==1||n==2){
     return 1;
    } 
    return fib(n-1)+fib(n-2);

}

int pow(int x, int n){
  if(n==0) return 1;
  if(n==1) return x;
  if(n%2==0){
  int ans = pow(x,n/2);
  return ans*ans;

  }else{
    int ans = pow(x,n/2);
     return x*ans*ans;
  }
//   return pow(x,n/2)*pow(x,n/2);


}
int stair(int n){
   if(n==1) return 1;
   if(n==2) return 2;
   return stair(n-1)+stair(n-2);
}
int stair3(int n){
   if(n==1) return 1;
   if(n==2) return 2;
   if(n==3) return 4;
   return stair3(n-1)+stair3(n-2)+stair3(n-3);
}
// Q:
// You are given a grid (maze) of size er × ec (ending at position (er, ec)) starting from the top-left corner (sr, sc). You can only move right or down at each step. Write a function to calculate the total number of unique paths from the starting cell (sr, sc) to the ending cell (er, ec).
int maze(int sr,int sc, int er, int ec){
    if(sr>er||sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int rightWays= maze(sr,sc+1,er,ec);
    int downWays= maze(sr+1,sc,er,ec);
    int totalWays=rightWays + downWays;
    return totalWays;
}
int maze2(int row,int col){
    if(row<1||col<1) return 0;
    if(row==1 && col==1) return 1;
    int rightWays= maze2(row,col-1);
    int downWays= maze2(row-1,col);
    int totalWays=rightWays + downWays;
    return totalWays;
}
void printmaze(int sr,int sc, int er, int ec,string s){
    if(sr>er||sc>ec) return ;
    if(sr==er&&sc==ec) {
        cout<<s<<endl;
         return  ;
    }
     printmaze(sr,sc+1,er,ec,s+'R');
    printmaze(sr+1,sc,er,ec,s+'D');
    
    
}
int main(){
 cout<<product(2,5)<<endl;

 greet(2);

 cout<<fact(5)<<endl;

 factupto(5);

 cout<<factRec(6)<<endl;

 print(6);
 cout<<endl;

 prints(1,6);
 cout<<endl;

 printss(6);
 cout<<endl;

 cout<<sum(5)<<endl;

 su(0,6);
 cout<<endl;

 squr(2,4);
 cout<<endl;

 cout<<power(2,4);
 cout<<endl;

 fibo(16);
 cout<<endl;

 cout<<fib(8);
 cout<<endl;

 cout<<pow(3,8);
 cout<<endl;

 cout<<stair(6)<<endl;
 cout<<stair3(6)<<endl;
 cout<<maze(0,0,2,2)<<endl;
cout<<maze2(3,3)<<endl;
 printmaze(1,1,3,3,"");
}