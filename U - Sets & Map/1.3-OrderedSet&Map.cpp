#include <iostream>
#include <set>
#include <map>
using namespace std;
int main()
{
    // Ordered Sets
    set<int> s;
    s.insert(5);
    s.insert(3);
    s.insert(7);
    for (int ele : s)
    {
        cout << ele << " "; // Print in ascending order
    }
    cout << endl;
    // Ordered Map
    map<int, int> m;
    m[1] = 30;
    m[3] = 10;
    m[2] = 20;
    for (auto ele : m)
    {
        cout << ele.first << " "; // Print in ascending order of key
    }
    for (auto ele : m)
    {
        cout << ele.second << " "; // Print in ascending order of key
    }

    map<string, int> c;
    c["Moni"] = 30;
    c["Soni"] = 10;
    c["Avanish"] = 20;
    for (auto ele : c)
    {
        cout << ele.first << " "; // Print in ascending order of key
    }
    for (auto ele : c)
    {
        cout << ele.second << " "; // Print in ascending order of key
    }
}