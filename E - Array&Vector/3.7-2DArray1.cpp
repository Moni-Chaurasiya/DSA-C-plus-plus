#include<iostream>
using namespace std;
int main(){

  //  2D Array is called as array of array

    int arr[3][3];
    // row-->3  0--2
    // columns-->  0--2

    // cout<<arr[0][0]<<endl;; //It Give garbage value 

    arr[0][0]=4;
    cout<<arr[0][0]<<endl;

 /*Declaration*/
      int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  //  int b[3][3]={1,2,3,4,5,6,7,8,9}; // We can also declare like this
  //  int c[][3]={1,2,3,4,5,6,7,8,9};   // We can also declare like this
  //  int d[3][]={1,2,3,4,5,6,7,8,9}; // This way of declaration is wrong

    cout<<a[0][0]<<endl; 
    for(int i=0;i<=2;i++){   // i is for row number
        for(int j=0;j<=2;j++){  // j is for column number
          cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

//Taking Input from user
    int m; //row
    cout<<"Enter number of row:"<<endl;
    cin>>m;

    int n;  //column
    cout<<"Enter number of column:"<<endl;
    cin>>n;
   
    cout<<"Enter Element of array:"<<endl;
    int array[m][n];
     for(int i=0;i<=m-1;i++){   // i is for row number
        for(int j=0;j<=n-1;j++){  // j is for column number
          cin>>array[i][j];
        }
      
    }
// Printing Array
     for(int i=0;i<=m-1;i++){   // i is for row number
        for(int j=0;j<=n-1;j++){  // j is for column number
          cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }

//Printing  Roll number and Marks of 4 students
   
   cout<<"Enter Roll no and Marks:"<<endl;
     for(int i=0;i<=3;i++){   // i is for row number
        for(int j=0;j<=1;j++){  // j is for column number
          cin>>array[i][j];
        }
      
    }

     for(int i=0;i<=3;i++){   // i is for row number
        for(int j=0;j<=1;j++){  // j is for column number
          cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }

}
