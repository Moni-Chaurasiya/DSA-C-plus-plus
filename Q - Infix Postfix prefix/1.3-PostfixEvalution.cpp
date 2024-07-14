#include <iostream>
#include <stack>
using namespace std;
// Postfix evalution
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
    string s = "79+4*8/3-"; // infix expression

    stack<int> val;

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
            int n2 = val.top();
            val.pop();
            int n1 = val.top();
            val.pop();

            int ans = solve(n1, n2, s[i]);
            val.push(ans);
        }
    }
    cout << val.top() << endl;
    cout << (7 + 9) * 4 / 8 - 3 << endl;
}
