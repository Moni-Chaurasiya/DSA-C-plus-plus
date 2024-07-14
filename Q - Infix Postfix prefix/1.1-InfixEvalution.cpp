#include <iostream>
#include <stack>
using namespace std;
/*
Rules--> 1. if s[i] is a digit, then push into val stack.
         2. if s[i] is +,-,*,/
             (a). if operator stack is empty then push.
             (b). if priority(st.top)<priority(s[i]) then push.
             (c). while  priority(st.top) >= priority(s[i])

*/
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
int solve(int val1, int val2, char oper)
{
    if (oper == '+')
    {
        return val1 + val2;
    }
    else if (oper == '-')
    {
        return val1 - val2;
    }
    else if (oper == '*')
    {
        return val1 * val2;
    }
    else
    {
        return val1 / val2;
    }
}
int main()
{
    string s = "(7+9)*4/8-3"; // infix expression
    // we need two stack, 1 for vals , 1 for ops
    stack<int> val;
    stack<char> ops;
    for (unsigned int i = 0; i < s.length(); i++)
    {
        // check if s[i] is number
        if (isdigit(s[i]))
        {
            int n = s[i] - '0'; // convert char to int
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
                    int n2 = val.top();
                    val.pop();
                    int n1 = val.top();
                    val.pop();
                    char oper = ops.top();
                    ops.pop();
                    int ans = solve(n1, n2, oper);
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
                // work
                //  we have to do val1 ops va2
                while (ops.size() > 0 && priority(s[i]) <= priority(ops.top()))
                {
                    int n2 = val.top();
                    val.pop();
                    int n1 = val.top();
                    val.pop();
                    char oper = ops.top();
                    ops.pop();
                    int ans = solve(n1, n2, oper);
                    val.push(ans);
                }
                ops.push(s[i]);
            }
        }
    }
    while (ops.size() > 0)
    {
        int n2 = val.top();
        val.pop();
        int n1 = val.top();
        val.pop();
        char oper = ops.top();
        ops.pop();
        int ans = solve(n1, n2, oper);
        val.push(ans);
    }
    cout << val.top() << endl;
    cout << (7 + 9) * 4 / 8 - 3 << endl;
}