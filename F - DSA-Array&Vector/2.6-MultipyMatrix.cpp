#include<iostream>
#include<vector>
using namespace std;
int main(){
  int a;
  cout<<"Enter the row of 1st matrix:"<<endl;
  cin>>a;

  int n;
  cout<<"Enter the column 1st matrix:"<<endl;
  cin>>n;

  int t[a][n];
  cout<<"Enter element of 1st matrix:"<<endl;
  for(int i=0;i<a;i++){
    for(int j=0;j<n;j++){
      cin>>t[i][j]; 
    }
  }
  cout<<"1st matrix is "<<endl;
  for(int i=0;i<a;i++){
    for(int j=0;j<n;j++){
      cout<<t[i][j]<<" "; 
    }
    cout<<endl;
  }


 

  int b;
  cout<<"Enter the column 2nd matrix:"<<endl;
  cin>>b;

  int arr[n][b];
  cout<<"Enter element of 2nd matrix:"<<endl;
  for(int i=0;i<n;i++){
    for(int j=0;j<b;j++){
      cin>>arr[i][j]; 
    }
  }
  cout<<"2nd matrix is "<<endl;
  for(int i=0;i<n;i++){
    for(int j=0;j<b;j++){
      cout<<arr[i][j]<<" "; 
    }
    cout<<endl;
  }
int mult[a][b];
for(int i=0;i<a;i++){
    for(int j=0;j<b;j++){
        mult[i][j]=0;
        for(int k=0; k<n; k++){
            mult[i][j]+= t[i][k]*arr[k][j] ;
        
        }
    }
  
  }


cout<<"Multiply of matrix is "<<endl;
for(int i=0;i<a;i++){
    for(int j=0;j<b;j++){
      cout<<mult[i][j]<<" "; 
    }
    cout<<endl;
}


}