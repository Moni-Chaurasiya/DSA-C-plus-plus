#include<iostream>
using namespace std;
#include<cmath>
void func(){
    cout<<"Hello, I am Moni"<<endl;
    cout<<"Have a nice day"<<endl;
}


void printTriangle(int x){
    for(int i=1; i<=x; i++){
        for(int j=1; j<=i; j++ ){
            cout<<"*";
        }
        cout<<endl;
    }

}
int sum(int x, int y){
    return x+y;
}

int mini(int x , int y){
    int a;
    if(x<y) a=x;
    else a=y;
    return a;
}
int main(){
    func();     
    func();     // function call
    printTriangle(3);
    printTriangle(4);
    printTriangle(5);
    cout<<sum(40,50)<<endl;
    int x, y;
    cin>>x>>y;
    cout<<mini(x,y)<<endl;
    
    cout<<min(x,y)<<endl;
    cout<<max(x,y)<<endl;
    cout<<sqrt(9.8)<<endl;
}