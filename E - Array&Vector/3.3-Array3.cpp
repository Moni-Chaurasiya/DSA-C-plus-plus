#include<iostream>
#include<climits>
using namespace std;
int main(){

// Print sum of value of array
   
    cout<<"Print sum of value of array"<<endl;

    int n; 
    cout<<"Enter size of array:"<<endl;
    cin>>n;
    cout<<"Enter value:";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<sum<<endl;   



// Search element in an array
    cout<<" Search element in an array"<<endl;

    int x;
    cout<<"Enter the size of array:"<<endl;
    cin>>x;
    cout<<"Enter value:"<<endl;
    int b[x];
    for(int i=0;i<x;i++){
        cin>>b[i];
    }
    int y;
    cout<<"Enter element you want to search"<<endl;
    cin>>y;
    //Check mark
    bool flag= false;
     for(int i=0;i<x;i++){
        if(b[i]==y){
            flag= true;
        }
     }
     if(flag==true)  cout<<"Element is found"<<endl;
     else  cout<<"Element is not found"<<endl;    



// Maximum value out of all the elements in an array
  cout<<"Maximum value out of all the elements in an array"<<endl;    
    int a;
    cout<<"Enter the size of array:"<<endl;
    cin>>a;
    cout<<"Enter value:"<<endl;
    int array[a];
    for(int i=0;i<a;i++){
        cin>>array[i];
    }
   // int max=array[0];
    int max= INT_MIN;
    for(int i=1;i<=a-1;i++){
         if(array[i]>max){
            max= array[i];
         }
    }
    cout<<"Maximum element is "<<max<<endl; 

    

// Second Maximum value out of all the elements in an array
  cout<<"Second Maximum value out of all the elements in an array"<<endl;    
    int c;
    cout<<"Enter the size of array:"<<endl;
    cin>>c;
    cout<<"Enter value:"<<endl;
    int ar[c];
    for(int i=0;i<c;i++){
        cin>>ar[i];
    }
   // int max=array[0];
    int maxi= INT_MIN;
    for(int i=1;i<=c-1;i++){
         if(ar[i]>maxi){
            maxi= ar[i];
         }
    }
    int smax= INT_MIN;
    for(int i=0;i<=c-1;i++){
         if(ar[i]!=maxi && ar[i]>smax){
            smax= ar[i];
         }
    }
    cout<<"Second Maximum element is "<<smax<<endl;   

    


}