#include <iostream>
#include <string>
#include <cstdint> 
using namespace std;
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
/*

| i | s\[i] | numb | 1 << (n - i - 1) | Contribution | decimal |
| - | ----- | ---- | ---------------- | ------------ | ------- |
| 0 | '1'   | 1    | 1 << 3 = 8       | 1 \* 8 = 8   | 8       |
| 1 | '0'   | 0    | 1 << 2 = 4       | 0 \* 4 = 0   | 8       |
| 2 | '1'   | 1    | 1 << 1 = 2       | 1 \* 2 = 2   | 10      |
| 3 | '1'   | 1    | 1 << 0 = 1       | 1 \* 1 = 1   | 11      |

*/
int count_set_bits(int n){
    return __builtin_popcount(n);
}

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


int  count_set_bits2(int n){
    int count =0;
    while(n>0){
        count++;
        n=(n&(n-1));
    }
 return count;
}


int main() {

    string binary = "1111";
    int result = BinaryToDecimal(binary);  // Call the function and store the result
    cout << result << endl;  // Print the result
    cout << decimal_to_binary(13)<<endl;
    cout << count_set_bits(8)<<"\n";
     cout << count_set_bits2(453)<<"\n";
    return 0;

}