// What is Sorting ?
// To sort = put in ascending order,decreasing order

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    vector<int> v(5);
    for(int i=0;i<5;i++){
        cin>>v[i];
    }

    // question is to check wheather the element is sorted or not

    bool flag = true;
    int n1=v.size();
    for(int i=0;i<n1-1;i++){
       if(v[i]>v[i+1]){
        flag=false;
        break;
       }
    }
    if(flag==true) cout<<"sorted"<<endl;
    else cout<<"unsorted"<<endl;

    sort(v.begin(),v.end()); //O(nlogn)
    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
   //  sort(v.end(),v.begin());   // cannot do segmentation fault
   reverse(v.begin(),v.end());
    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;



  //  *** Bubble sort algorithm ***
  /*
     [1st pass]
     arr = 5 1 4 3 2
           1 5 4 3 2 
           1 4 5 3 2
           1 4 3 5 2
           1 4 3 2[5]  O(n) --> 1st forloop iteration=5

     [2st pass]
     arr = 1 4 3 2 5
           1 4 3 2 5 
           1 3 4 2 5
           1 3 2[4 5]   O(n) --> 2st forloop iteration=4

     [3st pass]
     arr = 1 3 2 4 5
           1 3 2 4 5 
           1 2[3 4 5]    O(n) --> 3st forloop iteration=3

     [4st pass]
     arr = 1 2 3 4 5 
           1[2 3 4 5]    O(n) --> 4st forloop iteration=2    

   If there are n element then we require n-1 passes     
   In each passes swap 2 adjacent element if arr[i]>arr[i+1]        
  
  */ 

 int arr[5]={5,4,3,2,1};
  for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int n=5;
    bool flag1 = true;
 for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1-i;j++){
        if(arr[j]>arr[j+1]){
            int temp= arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            //swap(arr[j],arr[j+1]);
        flag1=false;
        }
    }
    if(flag1==true) break; 
 }
  for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

//Time and Space Complexity 
/*  

i = 0,1,2,3... n-2
i = 0,  j = 0,1,2,3... n-2
i = 1,  j = 0,1,2,3... n-3
i = 2,  j = 0,1,2,3... n-4
i = 3,  j = 0,1,2,3... n-5
.
.
.
i=n-2, j=0

No of term = 1+2+3+4...n-1
Time Complexity   =  (n-1)(n-1+1)/2
                  =  n(n-1)/2
                  =  O(n^2) --> worst case, average case
                  =  O(n)   --> Best case
Space Complexity  =  O(1)                  


*/
}