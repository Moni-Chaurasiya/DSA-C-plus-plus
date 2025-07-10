#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

vector<int> findClosestElements(vector<int>& arr, int k, int x) {
    int n = arr.size();
    vector<int> v;

    if (x < arr[0]) {
        for (int i = 0; i < k; i++) {
            v.push_back(arr[i]);
        }
        return v;
    }
    if (x > arr[n - 1]) {
        for (int i = n - k; i < n; i++) {
            v.push_back(arr[i]);
        }
        return v;
    }

    int l = 0, h = n - 1;
    bool flag = false;
    int ll, hh;

    while (l <= h) {
        int mid = l + (h - l) / 2;
        if (x == arr[mid]) {
            flag = true;
            ll = mid - 1;
            hh = mid + 1;
            v.push_back(arr[mid]);
            break;
        } else if (x > arr[mid]) {
            l = mid + 1;
        } else {
            h = mid - 1;
        }
    }

    if (!flag) {
        ll = h;
        hh = l;
    }

    while (v.size() < k && ll >= 0 && hh < n) {
        int d1 = abs(x - arr[ll]);
        int d2 = abs(x - arr[hh]);

        if (d1 <= d2) {
            v.push_back(arr[ll--]);
        } else {
            v.push_back(arr[hh++]);
        }
    }

    while (v.size() < k && ll >= 0) v.push_back(arr[ll--]);
    while (v.size() < k && hh < n) v.push_back(arr[hh++]);

    sort(v.begin(), v.end());
    return v;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 4;
    int x = 3;
    vector<int> result = findClosestElements(arr, k, x);
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}
