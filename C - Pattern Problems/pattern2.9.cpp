/*

1 
2 3
4 5 6
7 8 9 10

1
0 1
1 0 1
0 1 0 1

1
0 0
1 1 1
0 0 0 0

*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    int m=1;
    for(int i=1;i<=n;i++){
        for(int j=1; j<=i;j++){
            cout<<m<<" ";
            m=m+1;
            
        }
        cout<<endl;
    }

    for(int i=1;i<=n;i++){
        for(int j=1; j<=i;j++){
        if((i+j)%2==0){
            cout<<"1"<<" ";
        }
        else{
            cout<<"0"<<" ";
        }   
        }
        cout<<endl;
    }
     /* OR */
     int a;
      for(int i=1;i<=n;i++){
        
        if(i%2==0) a=0; //row no even
        else a=1; // row no odd
        for(int j=1; j<=i;j++){
         cout<<a<<" ";
        
        }
        cout<<endl;
    }

     int b;
      for(int i=1;i<=n;i++){
        
        if(i%2==0) b=0; //row no even
        else b=1; // row no odd
        for(int j=1; j<=i;j++){
         cout<<b<<" ";
        // flipping
         if(b==1) b=0;
         else b=1;
        }
        cout<<endl;
    }
}