
#include <iostream>
#include <stack>
#include <string>
using namespace std;

string solve(string val1, string val2, char oper) // postfix to prefix
{
    string st = "";
    st.push_back(oper);
    st += val1;
    st += val2;
    return st;
}
int main()
{
    string s = "79+4*8/3-"; // postfix expression

    stack<string> val;

    for (unsigned int i = 0; i < s.length(); i++)
    {
        // check if s[i] is number
        if (isdigit(s[i]))
        {
            string n = to_string(s[i] - '0'); // convert char ->  int -> string
            val.push(n);
        }
        else
        {
            string n2 = val.top();
            val.pop();
            string n1 = val.top();
            val.pop();

            string ans = solve(n1, n2, s[i]);
            val.push(ans);
        }
    }
    cout << val.top() << endl;
    cout << "-/*+79483" << endl;
}