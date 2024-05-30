#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main(){
     vector<int> v;
    v.push_back(12);
    v.push_back(10);
    v.push_back(24);
    v.push_back(9);
    v.push_back(35);
    for(unsigned int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    sort(v.begin(),v.end());
    
    for(unsigned int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}