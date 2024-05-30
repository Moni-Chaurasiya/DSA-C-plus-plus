/*
   123456
   1    6
   1    6
   1    6
   1    6
   123456

*/

#include <iostream>
using namespace std;
int main()
{
    int n, m;
      cout<<"Enter no of column";
    cin>>n;
      cout<<"Enter no of row";
    cin>>m;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == m || j == 1 || j == n)
            {
                cout<<j;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}