//Reverse array part

#include<iostream>
#include<vector>
using namespace std;

   void reversePart(int x, int y, vector<int>& arr1){
       while(x<=y){
            int t=arr1[x];
            arr1[x]=arr1[y];
            arr1[y]=t;
            
            y--;
            x++;

       }
       return;
   }
   void display(vector<int>& arr1){
    for(unsigned int i=0;i<arr1.size(); i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
   }

int main(){
    vector<int> arr1;
  
    int n;
    cout<<"Enter array size:"<<endl;
    cin>>n;

    cout<<"Enter array element:"<<endl;

    for(int i=0; i<n;i++){
        int q;
        cin>>q;
        arr1.push_back(q) ;
    } 

    int x ,y;
    cout<<"Enter index to reverse "<<endl;
    cin>>x>>y;
    for (int i=x;i<=y;i++){
       int t=arr1[x];
            arr1[x]=arr1[y];
            arr1[y]=t;
            
            y--;
            x++;
    }

    for(unsigned int i=0; i<arr1.size(); i++){
        
        cout<<arr1[i]<<" ";
    } 

    //OR
     
   reversePart(0,5,arr1);
   cout<<endl;
   display(arr1);
  
}

/*  OUTPUT
Enter array size:
6
Enter array element:
12
13
34
45
46
32
Enter index to reverse 
3
5
12 13 34 32 46 45 
45 46 32 34 13 12
*/