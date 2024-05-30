#include<iostream>
using namespace std;
int main(){
    cout<<"Finding Maximum element of 2D array"<<endl;
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
     cout<<"Original array:"<<endl;
     for(int i=0;i<=m-1;i++){   // i is for row number
        for(int j=0;j<=n-1;j++){  // j is for column number
          cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }

    // Finding Maximum element of 2D array
    int max=array[0][0];
     for(int i=0;i<=m-1;i++){ 
        for(int j=0;j<=n-1;j++){ 
            if(array[i][j]>array[0][0]){
                max=array[i][j];
            }
        }
    }
    cout<<"maximum element is "<<max<<endl;

    // Finding Second Largest Array
    int smax= INT16_MIN;
       for(int i=0;i<=m-1;i++){ 
        for(int j=0;j<=n-1;j++){ 
            if(array[i][j]!=max && array[i][j]>smax){
                smax=array[i][j];
            }
        }
   }
    cout<<"Second maximum element is "<<smax<<endl;

    // Finding Sum of all element of  Array
    int sum= 0;
       for(int i=0;i<=m-1;i++){ 
        for(int j=0;j<=n-1;j++){ 
                sum+=array[i][j];
            }
        }
   
    cout<<"Sum of all element is "<<sum<<endl;

    //Program to add two matrices
    cout<<"Sum of two matrices"<<endl;
    cout<<"Enter Element of second array:"<<endl;
    int arr[m][n];
     for(int i=0;i<=m-1;i++){   // i is for row number
        for(int j=0;j<=n-1;j++){  // j is for column number
          cin>>arr[i][j];
        }
    }
    
    int ar[m][n];
    for(int i=0;i<=m-1;i++){   // i is for row number
        for(int j=0;j<=n-1;j++){
           ar[i][j]=array[i][j]+arr[i][j];
        }

    }
    cout<<"sum array:"<<endl;
     for(int i=0;i<=m-1;i++){   // i is for row number
        for(int j=0;j<=n-1;j++){  // j is for column number
          cout<<ar[i][j]<<" ";
        }
        cout<<endl;
    }

    // Transpose of matrics
    cout<<"Transport of original matrics is:"<<endl;
    int t[n][m];
     for(int i=0;i<=n-1;i++){   
        for(int j=0;j<=m-1;j++){
          t[i][j]=array[j][i];  
        
        }
    }
    for(int i=0;i<=n-1;i++){   
        for(int j=0;j<=m-1;j++){
          cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
}

