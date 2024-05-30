//LeetCode 867

/*class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
       int m=matrix.size();
       int n=matrix[0].size();
       vector<vector<int>> t(n,vector<int>(m));
        for(int i=0;i<=n-1;i++){   
        for(int j=0;j<=m-1;j++){
       
          t[i][j] = matrix[j][i];
        }
        cout<<endl;
    }
    return t;
    }
};  */


#include<iostream>
#include<vector>
using namespace std;
int main(){
  int m;
  cout<<"Enter the degree of matrix:"<<endl;
  cin>>m;
  int t[m][m];
  cout<<"Enter element of matrix:"<<endl;
  for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
      cin>>t[i][j]; 
    }
  }
  cout<<"Original matrix is "<<endl;
  for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
      cout<<t[i][j]<<" "; 
    }
    cout<<endl;
  }
//Transpose in the same matrix
  cout<<"Transpose of  matrix is "<<endl;
  for(int i=0;i<m;i++){
    for(int j=i+1;j<m;j++){
      int temp = t[i][j];
      t[i][j]=t[j][i];
      t[j][i]=temp;
    }
  }
  
  for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
       cout<<t[i][j]<<" "; 
    }
    cout<<endl;
  }




}