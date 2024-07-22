#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    // map<key,value> m;
    unordered_map<string, int> m;
    pair<string, int> p;
    p.first = "Moni";
    p.second = 76;
    m.insert(p);
    pair<string, int> q;
    q.first = "Soni";
    q.second = 76;
    m.insert(q);
    for (pair<string, int> p : m)
    {
        cout << p.first << " " << p.second << endl;
    }
    m["Avanish"] = 15;
    m["Amrita"] = 15;
    for (auto ele : m)
    {
        cout << ele.first << " " << ele.second << endl;
    }
}