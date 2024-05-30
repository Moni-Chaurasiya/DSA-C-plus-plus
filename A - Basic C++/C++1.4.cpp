#include<iostream>
using namespace std;
#include <cmath>
int main(){
    for(int i=1; i<=20 ;i++){
        if(i%2==0){
            cout<<i<<endl;
        }
    } 

    for(int i=19; i<=190; i=i+19){
        cout<<i<<endl;
    }     

    // Print this AP(Arithmetic Progession) 1 3 5 7 9 ...   Formula--> A(n) = a + (n-1)d 
    cout<<" Print this AP(Arithmetic Progession) 1 3 5 7 9 ..."<<endl;
    int n;
    cout<<"Enter number:";
    cin>>n;
    for(int i=1; i<=2*n-1 ;i=i+2){
            cout<<i<<endl;
    }


    // Print this AP 4 7 10 13 16 ...
    cout<<" Print this AP 4 7 10 13 16 ..."<<endl;
    int a = 4;
    cout<<"Enter number:";
    cin>>n;
    for(int i=1; i<=n ; i++){
        cout<<a<<endl;
        a=a+3;
    }


    // Print this GP(Geometric Progession) 1 2 4 8 16 ...  A(n) = a*r^(n-1) 
    cout<<"Print this GP(Geometric Progession) 1 2 4 8 16 ... "<<endl;
    int m;
    cout<<"Enter number:";
    cin>>m;
    int b=1;
    for(int i=1; i<=m;i++){
            cout<<b<<endl;
            b=b*2;
    }
            // OR

      
    cout << "Enter number:";
    cin >> n;

    for (int i = 1; i <= pow(2, n - 1); i += 2) {
        cout << i << endl;
    }

    cout << "Enter number:";
    cin >> a; 
    for(int i=1; a>=1; i--){
        cout<<a<<endl;
        a=a-3;
    }
    int j;
    cout<<j<<endl;  // It will print garbage value

    int x;
    x=1;
    while(x<10){
        cout<<x<<endl;
        x++;
    }
    
    int y=2;
    do{
        cout<<"Hello"<<endl;
        y++;
    }while(y<11);


// Print all ASCII value with characters 
 cout<<" Print all ASCII value with characters "<<endl;
    char Alpha='A';
    int ASCII=65;
    while(ASCII<=90){
    cout<<Alpha<<"-->"<<ASCII<<endl;
    ASCII++;
    Alpha++;

    }
                //OR
    for(int i=65;i<=90;i++){
        cout<<(char)i<<"-->"<<i<<endl;
    }


// Check wheather a number is composite or not 
 cout<<"Check wheather a number is composite or not"<<endl;
int q;
cout<<"Enter a number:"<<endl;
cin>>q;    
for(int i=2;i<=q-1;i++){
    if(q%i==0){
        cout<<q<<" is  composite"<<endl;
        break;
    }
}


// Check wheather a number is composite or prime 
 cout<<"Check wheather a number is composite or prime "<<endl;
int p;
cout<<"Enter a number:"<<endl;
cin>>p;    
bool flag= true;
for(int i=2;i<=p-1;i++){
    if(p%i==0){
        flag= false;
        break;
    }
}
if(q==1){
    cout<<q<<" is neither prime nor composite"<<endl;
}
else if (flag== true){
    cout<<p<<" is prime"<<endl;
}else{
    cout<<p<<" is composite"<<endl;
}


// Odd or Even using Continue(It is used to skip that condition)
cout<<"Odd or Even using Continue"<<endl;
for(int i=1 ; i<=100; i++){
    if(i%2==0) continue;
    cout<<i<<endl;
}
    

int r, s;
r=4 ,s=0;
while(r>=0){
    r--;
    s++;
    if(r==s) continue;
    else cout<<r<<" "<<s<<endl;
}      



    return 0;
}