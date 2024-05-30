// To find power of a number
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
     int m;
    cin>>m;
    int result=1;
    for(int i=1; i<=m; i++){
      result*=n;
    }
  
    cout<<result<<endl;
    return 0;
}