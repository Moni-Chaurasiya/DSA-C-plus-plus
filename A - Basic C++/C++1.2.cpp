#include<iostream>
using namespace std;
int main(){
    cout<<"Enter marks :"<<endl;
    int n;
    cin>>n;
    if(n>=91){
        cout<<"Excellent"<<endl;
    }
    else{
        if(n>=81){
          cout<<"Very good"<<endl;
        }
        else{
            if(n>=71){
              cout<<"good"<<endl;
            }
            else{
                if(n>=61){
                  cout<<"average"<<endl;
                }
                else{
                    if(n>=51){
                      cout<<"below average"<<endl;
                    }
                    else{
                        if(n>=41){
                          cout<<"Can do better"<<endl;
                        }
                        else{
                            cout<<"Fail"<<endl;
                        }
                    }
                }
            }
       }
    }

// Find whether a character is vowel or consonent
 cout<<" Find whether a character is vowel or consonent"<<endl;
    char ch;
    cout<<"Enter any charecter"<<endl;
    cin>>ch;
    int ascii= (int)ch;
     if(( ascii>=65 && ascii<=90) || ( ascii>=97 && ascii<=122)){
         if(ch =='a'|| ch=='i'|| ch=='e'|| ch=='o'|| ch=='u'){
           cout<<"Character is vowel"<<endl;
         }else{
           cout<<"Character is consonents"<<endl;
         }
     }else{
       cout<<"Not an alphabet"<<endl;
     }


//Take three number input and tell if they can be the sides of a triangle.
 cout<<"Take three number input and tell if they can be the sides of a triangle."<<endl;
  float a,b,c;
  cout<<"Enter first number:"<<endl;
  cin>>a;
  cout<<"Enter second number:"<<endl;
  cin>>b;
  cout<<"Enter third number:"<<endl;
  cin>>c;
  if(a+b>c && b+c>a && a+c>b){
    cout<<"It can be side of triangle"<<endl;
  }else{
    cout<<"It can not be side of triangle"<<endl;
  }
}