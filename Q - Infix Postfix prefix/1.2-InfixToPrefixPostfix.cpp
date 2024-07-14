
// Infix to Prefix convertion

#include <iostream>
#include <stack>
#include <string>
using namespace std;

int priority(char ch)
{
    if (ch == '+' || ch == '-')
    {
        return 1;
    }
    else
    {
        return 2;
    }
}
string solve(string val1, string val2, char oper) // infix to prefix
{
    string st = "";
    st.push_back(oper);
    st += val1;
    st += val2;
    return st;
}
/*string solve(string val1, string val2, char oper) // infix to postfix
{
    string st = "";
    st += val1;
    st += val2;
    st.push_back(oper);
    return st;
}*/
int main()
{
    string s = "(7+9)*4/8-3"; // infix expression
    // we need two stack, 1 for vals , 1 for ops
    stack<string> val;
    stack<char> ops;
    for (unsigned int i = 0; i < s.length(); i++)
    {
        // check if s[i] is number
        if (isdigit(s[i]))
        {
            string n = to_string(s[i] - '0'); // convert char to string
            val.push(n);
        }
        else
        {
            if (ops.size() == 0)
            {
                ops.push(s[i]);
            }
            else if (s[i] == '(')
            {
                ops.push(s[i]);
            }
            else if (ops.top() == '(')
            {
                ops.push(s[i]);
            }
            else if (s[i] == ')')
            {
                while (ops.top() != '(')
                {
                    string n2 = val.top();
                    val.pop();
                    string n1 = val.top();
                    val.pop();
                    char oper = ops.top();
                    ops.pop();
                    string ans = solve(n1, n2, oper);
                    val.push(ans);
                }
                ops.pop();
            }
            else if (priority(s[i]) > priority(ops.top()))
            {
                ops.push(s[i]);
            }
            else
            {

                while (ops.size() > 0 && priority(s[i]) <= priority(ops.top()))
                {
                    string n2 = val.top();
                    val.pop();
                    string n1 = val.top();
                    val.pop();
                    char oper = ops.top();
                    ops.pop();
                    string ans = solve(n1, n2, oper);
                    val.push(ans);
                }
                ops.push(s[i]);
            }
        }
    }
    while (ops.size() > 0)
    {
        string n2 = val.top();
        val.pop();
        string n1 = val.top();
        val.pop();
        char oper = ops.top();
        ops.pop();
        string ans = solve(n1, n2, oper);
        val.push(ans);
    }
    cout << val.top() << endl;
    cout << (7 + 9) * 4 / 8 - 3 << endl;
}