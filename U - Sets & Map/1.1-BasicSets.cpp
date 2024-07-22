#include <iostream>
#include <unordered_set>
#include <set>
using namespace std;
/*
Sets --> Data Structure
insert-> O(1)
search-> O(1)
delete-> O(1)
*/

int main()
{
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(1); // Set will not store repeated element, size is still 4

    // for each loop
    // : -> in, ele -> each element of s
    for (int ele : s)
    {
        cout << ele << " ";
    }
    cout << endl;
    cout << s.size() << endl; // size is 4
    s.erase(2);               // delete 2
    cout << s.size() << endl; // size is 3
    int target = 4;
    //   s.find() -> it searches in the set, and if it is not found then it return the last element.
    if (s.find(target) != s.end())
    { // target exists
        cout << "exist" << endl;
    }
    else
    {
        cout << "Not exist" << endl;
    }
}