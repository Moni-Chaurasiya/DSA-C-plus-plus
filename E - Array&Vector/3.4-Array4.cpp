#include<iostream>
using namespace std;

void display(int a[],int size){
    for(int i=0; i<=size-1;i++){
        cout<<a[i]<<" ";
    }
    return;
}
void change(int b[]){
    b[0]=100;
}
int main(){
    int arr[5]={1,3,4,6,7};
    int size= sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    //accessing the element of array in another function
    //updation pass by value/ reference ?
    display(arr,size);    //1 3 4 6 7
    change(arr);
    display(arr,size);    //1 3 4 6 7 100 3 4 6 7 


}