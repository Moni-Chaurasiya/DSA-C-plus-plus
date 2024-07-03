#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void print(stack<char> &st)
{

    stack<char> temp;
    while (st.size() > 0)
    {
        int x = st.top();
        st.pop();
        temp.push(x);
    }

    while (temp.size() != 0)
    {
        cout << temp.top() << " ";
        int x = temp.top();
        temp.pop();
        st.push(x);
    }
    cout << endl;
}
string removeDupli(stack<char> &st, string s)
{

    for (unsigned int i = 0; i < s.length(); i++)
    {
        if (st.size() == 0)
        {
            st.push(s[i]);
        }
        if (st.top() != s[i])
        {
            st.push(s[i]);
        }
    }
}

int main()
{
    string s = "aaabbbccccddfghhh";
    stack<char> st;
    removeDupli(st, s);
    print(st);
}