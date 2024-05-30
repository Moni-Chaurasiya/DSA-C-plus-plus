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
 cout<<"Wave Form of  matrix is "<<endl;
 /* 
matrix is 
1 2 3
4 5 6
7 8 9
Wave Form of  matrix is
7 8 9 6 5 4 1 2 3   
*/
    for (int i = a-1; i>=  0; i--) {
        if (i % 2 == 0) { // Even-indexed rows (0-based) are printed left to right
            for (int j = 0; j < b; j++) {
                cout << t[i][j] << " ";
            }
        } else { // Odd-indexed rows (0-based) are printed right to left
            for (int j = b - 1; j >= 0; j--) {
                cout << t[i][j] << " ";
            }
        }
    }


/*
matrix is 
1 2 3
4 5 6
7 8 9
Wave Form of  matrix is
1 4 7 8 5 2 3 6 9       
*/
    for (int i = 0; i  < b; i++) {
        if (i % 2 == 0) { // Even-indexed rows (0-based) are printed left to right
            for (int j = 0; j < a; j++) {
                cout << t[j][i] << " ";
            }
        } else { // Odd-indexed rows (0-based) are printed right to left
            for (int j = a - 1; j >= 0; j--) {
                cout << t[j][i] << " ";
            }
        }
    }

 return 0;

}

