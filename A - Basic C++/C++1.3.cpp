#include<iostream>
using namespace std;
int main(){
    //Ternary operator
    cout<<"Ternary operator"<<endl;
    int x;
    cout<<"Enter Number:";
    cin>>x;
    x%2==0 ? cout<<"even" : cout<<"odd" ;

    int y;
    cout<<"Enter Marks:";
    cin>>y;
    y> 33? cout<<"pass" : cout<<"fail" ;

    // Switch Case
    cout<<"Switch Case"<<endl;
    int n;
    cout<<"Enter day Number:"<<endl;
    cin>>n;
    switch(n){
        case 1 :
           cout<<"Monday";
           break;
        case 2 :
           cout<<"Tuesday";
            break;
        case 3 :
           cout<<"Wednesday";
            break;   
        case 4 :
           cout<<"Thursday";
            break;
        case 5 :
           cout<<"Friday";
            break;
        case 6 :
           cout<<"Saturday";  
            break;
        case 7 :
           cout<<"Sunday"; 
            break;     
        default:
           cout<<"Invalide Number"<<endl;   
    }

    int m;
    cout<<"Enter Month Number:"<<endl;
    cin>>m;
    switch((m<=7 && x%2!=0)||(m>=8 && x%2==0) ){
        case 1 :
          cout<<"31"<<endl;
    }
  
    switch(m==4 || m==6 || m==9 || m==11){
        case 1:
          cout<<"30"<<endl;
    }
    switch(m){
        case 1 :
        cout<<"28"<<endl;
    }
}