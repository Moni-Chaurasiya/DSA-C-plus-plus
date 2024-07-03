#include<iostream>
using namespace std;
string decimal_to_binary(int num){
    string result=" ";
    while(num>0){
        if(num%2==0){
           result = "0" + result;
        }else {
           result = "1" + result;
        }
        num =num/2;

    }
    return result;
}

// Binary to decimal conversion
int BinaryToDecimal(const string &binary) {
    int n = binary.length();
    int decimal = 0;
    for (int i = n - 1; i >= 0; i--) {
        char ch = binary[i];
        int numb = ch - '0';  // Convert character to its numeric value
        decimal += numb * (1 << (n - i - 1));
    }
    return decimal;
}
int main(){
    //Give two number flip bits of one number to make another number
    int x=23;
    int y=32;
    cout<<"First number is "<<x<<endl;
    cout<<"First number is "<<y<<endl;

    cout<<__builtin_popcount(x^y)<<endl;
    string binaryX =decimal_to_binary(x);
    string binaryY =decimal_to_binary(y);
    int n= binaryX.size();
    int i=0;
    while(i<n){
        if( binaryX[i]!=binaryY[i]){
            binaryX[i]=binaryY[i];
        }
        i++;
    }
    int result = BinaryToDecimal(binaryX); 
    cout<<"First number became "<<result<<endl;
    
}