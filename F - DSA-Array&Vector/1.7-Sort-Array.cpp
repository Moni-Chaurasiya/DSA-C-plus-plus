#include<iostream>
#include<vector>
using namespace std;
void sort01(vector<int>& v){
    int zero=0;
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
}
int main(){
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
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