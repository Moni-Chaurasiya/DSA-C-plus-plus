#include<iostream>
#include<vector>
using namespace std;

void change(int a[]){
    a[0]=10;
}
void change2D(int arr[3][3]){  // We have to declare size also otherwise it will give error
    arr[0][0]=100;
}
void change2DVector(vector< vector<int> > &v){
    v[0][1]=1000;
}

int main(){

      //Basic
    vector< vector<int> > v;
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    vector<int> v2;
    v2.push_back(4);
    v2.push_back(5);
    vector<int> v3;
    v3.push_back(6);
    v3.push_back(7);
    v3.push_back(8);
    v3.push_back(9);
    v3.push_back(10);  
    cout<<v3[4]<<endl;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    cout<<v[1][1]<<endl;
   // cout<<v[1][10]<<endl;  // Invalid

   int a[3]={1,2,3};
   cout<<a[0]<<endl;
   change(a);
   cout<<a[0]<<endl;

   int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
   cout<<arr[0][0]<<endl;
   change2D(arr);
   cout<<arr[0][0]<<endl;

  
   cout<<v[0][1]<<endl;
   change2DVector(v);
   cout<<v[0][1]<<endl;

   cout<<v.size()<<endl;

   vector<int> b(5,3);  // Size of vector is 5 and value stored is 3
   cout<<b[0]<<" ";
   cout<<b[1]<<" ";
   cout<<b[2]<<" ";
   cout<<b[3]<<" ";
   cout<<b[4]<<" ";
 //  vector<vector<int>> c(3,2) // not allow in 2D vector it will give error
 //  vector<vector<int>> c(3,vector<int> (4)); // row of vector is 3 and size of each vector is 4
   vector<vector<int>> c(3,vector<int> (4,2)); // value of each is 2
   cout<<c.size()<<endl;  //3
   cout<<c[0].size()<<endl;   //It will give no of column in 1st row
   cout<<c[2][3]<<endl;  // 2 
   for(int i=0; i<3;i++){
    for(int j = 0 ;j<4;j++){
        cout<<c[i][j]<<" ";
    }
    cout<<endl;
   }
}