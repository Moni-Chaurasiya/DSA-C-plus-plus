#include<iostream>
using namespace std;

//Address of main and fun will be different


void fun(int x, int y){    //formal parameter
    cout<<"Address of fun x "<<&x<<endl;
    cout<<"Address of fun y "<<&y<<endl;

}
int main(){
    int x =3;
    int y= 5;
    cout<<"Address of main x "<<&x<<endl;   
    cout<<"Address of main y "<<&y<<endl;
    fun(x,y);    // Actual Parameter
}