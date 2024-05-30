/*
   1234567
   1234567
   1234567
   1234567
   1234567
   1234567
   1234567

*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number :"<<endl;
    cin>>n;
    for(int i=1 ; i<=n; i++){
        for(int j=1;j<=n;j++){ //If in this line i is used instead of j than we cannot access i inside j loop therefore different variable is used
            cout<<j;
        }
   /*   for(int k=1; k<=(i-1); k++){
            cout<<k;
        }*/
        cout<<endl;
        
    }
    return 0;
}