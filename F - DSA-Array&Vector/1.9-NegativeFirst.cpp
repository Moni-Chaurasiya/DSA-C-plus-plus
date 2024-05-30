#include<iostream>
#include<vector>
using namespace std;
void sort01(vector<int>& v){
  int j=v.size()-1;
  int i=0;
       while(i<j){
         if(v[i]<0) i++;
         else if(v[j]>=0) j--;
         else if(v[i]>=0 && v[j]<0){
         int t=v[i];   
         v[i]=v[j];
         v[j]=t;
         i++;
         j--;
         }

    }
  
}

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(-4);
    v.push_back(5);
    v.push_back(-7);
    v.push_back(-9);
    v.push_back(3);
    v.push_back(1);
    v.push_back(10);
    for(unsigned int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
 /*   int zero=0;
    int nonzero=0;
    for(unsigned int i=0;i<v.size(); i++){
        if(v[i]==0){
            zero++;
        }else{
            nonzero++;
        }
    }
    
    for(int i=0;i<zero; i++){
        v[i]= 0;
    }
    for(unsigned int i=zero; i<v.size(); i++){
        v[i]= 1;
    }
 */
    sort01(v);
    for(unsigned int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}