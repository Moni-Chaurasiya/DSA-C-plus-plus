#include <iostream>
#include <stack>
#include <string>
using namespace std;

string solve(string val1, string val2, char oper) // Prefix to Postfix
{
    string st = "";
    st += val1;
    st += val2;
    st.push_back(oper);
    return st;
}
int main()
{
    string s = "-/*+79483"; // Prefix expression

    stack<string> val;

    for (int i = s.length() - 1; i >= 0; i--)
    {
        // check if s[i] is number
        if (isdigit(s[i]))
        {
            string n = to_string(s[i] - '0');
            val.push(n);
        }
        else
        {
            string n1 = val.top();
            val.pop();
            string n2 = val.top();
            val.pop();

            string ans = solve(n1, n2, s[i]);
            val.push(ans);
        }
    }
    cout << val.top() << endl;
}