#include<iostream>
#include<vector>
using namespace std;
int main(){
  int a;
  cout<<"Enter the row of 1st matrix:"<<endl;
  cin>>a;

  int b;
  cout<<"Enter the column 1st matrix:"<<endl;
  cin>>b;

vector<vector<int>> t(a, vector<int>(b));
  cout<<"Enter element of  matrix:"<<endl;
  for(int i=0;i<a;i++){
    for(int j=0;j<b;j++){
      cin>>t[i][j]; 
    }
  }
  cout<<" matrix is "<<endl;
  for(int i=0;i<a;i++){
    for(int j=0;j<b;j++){
      cout<<t[i][j]<<" "; 
    }
    cout<<endl;
  }
 cout<<"Spiral Form of  matrix is "<<endl;
 
    int maxR=a-1;
    int maxC=b-1;
    int minR=0;
    int minC=0;
  while(minR<=maxR && minC<=maxC ){

    for(int j=minC;j<=maxC;j++){
      cout<<t[minR][j]<<" "; 
    }
    minR++;
   if( minR>maxR || minC>maxC)  break;
    for(int j=minR;j<=maxR;j++){
      cout<<t[j][maxC]<<" "; 
    }
    maxC--;
    if( minR>maxR || minC>maxC)  break;
    for(int j=maxC;j>=minC;j--){
      cout<<t[maxR][j]<<" "; 
    }
    maxR--;
    if( minR>maxR || minC>maxC)  break;
    for(int j=maxR;j>=minR;j--){
      cout<<t[j][minC]<<" "; 
    }
    minC++;

 }
  
 

}

