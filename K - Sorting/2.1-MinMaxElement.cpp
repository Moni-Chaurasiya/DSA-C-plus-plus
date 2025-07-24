#include <iostream>
#include <climits>
using namespace std;
// Finding minmax elements from array using recursion
// Divide and conquer rule
void findMinMax(int arr[], int low, int high, int &minVal, int &maxVal) {
    // If only one element
    if (low == high) {
        if (arr[low] < minVal) minVal = arr[low];
        if (arr[low] > maxVal) maxVal = arr[low];
        return;
    }

    // If two elements
    if (high == low + 1) {
        if (arr[low] < arr[high]) {
            if (arr[low] < minVal) minVal = arr[low];
            if (arr[high] > maxVal) maxVal = arr[high];
        } else {
            if (arr[high] < minVal) minVal = arr[high];
            if (arr[low] > maxVal) maxVal = arr[low];
        }
        return;
    }

    // If more than two elements
    int mid = (low + high) / 2;
    findMinMax(arr, low, mid, minVal, maxVal);
    findMinMax(arr, mid + 1, high, minVal, maxVal);
}

int main() {
    int arr[] = {4, 7, 2, 8, 1, 9, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int minVal = INT_MAX;
    int maxVal = INT_MIN;

    findMinMax(arr, 0, n - 1, minVal, maxVal);

    cout << "Minimum element: " << minVal << endl;
    cout << "Maximum element: " << maxVal << endl;

    return 0;
}