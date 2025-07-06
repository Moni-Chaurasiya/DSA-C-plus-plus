#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> v;   // you need not mention the size
    // inserting / input do not use []
    v.push_back(6);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(3);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl; 
    v.push_back(2);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;  //  when size and capacity is equal Capacity will be double of the previous one
    v.push_back(4);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    v[0]=5;            
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" "; 
    
    cout<<endl;
    v.pop_back();
    for(unsigned int i=0;i<v.size();i++){      
        cout<<v[i]<<" ";
    }
    cout<<endl;

// In C++, the capacity of a std::vector refers to the total number of elements the vector can hold without needing to reallocate memory. 
// It is distinct from the size, which represents the number of elements currently stored in the vector.

// Relationship with size():
// The capacity() is always greater than or equal to the size(). When size() equals capacity(), the next insertion will likely trigger a reallocation and an increase in capacity.

      vector<int> m;    // Size   Capacity
       m.push_back(6);  //  1       1
       m.push_back(2);  //  2       2     capacity double because in previous one both size and capacity is same
       m.push_back(3);  //  3       4
       m.push_back(4);  //  4       4
       m.push_back(6);  //  5       8
       m.push_back(8);  //  6       8
       m.push_back(3);  //  7       8
       m.push_back(2);  //  8       8
       m.push_back(2);  //  9       16    capacity double because in previous one both size and capacity is same

       cout<<m.size()<<endl;
       cout<<m.capacity()<<endl;
      
       m.pop_back();
       m.pop_back();
       m.pop_back();

       cout<<m.size()<<endl;
       cout<<m.capacity()<<endl;

     cout<<endl;
     vector<int> c(5);
     cout<<c[4]<<endl;  // 0
     for(int i=0; i<=5;i++){
        cin>>c[i];
     }
     cout<<endl;
     for(int i=0; i<=5;i++){
        cout<<c[i]<<" ";
     }

     vector<int> b(5,3); // Initial size 5 and each has value 3
     cout<<b[2]<<endl;

     m.at(2)=90;
     cout<<m.at(2)<<endl;

      sort(m.begin(),m.end());
      cout<<"size of m is "<<m.size()<<"  " ;
      for(unsigned int i=0; i<m.size();i++){   // m.size() is an unsigned integer 
        cout<<m.at(i)<<" ";
      }

      cout<<endl;
      //Find index of last occurance of element
      int x=4;
      int idx = -1;
      for(unsigned int i=m.size()-1; i>=0; i--){   
        if(m[i]==x){
         idx=i;
         break;
        }
      }
      cout<<idx;
}
