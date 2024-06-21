#include <iostream>
#include <vector>

using namespace std;

// Function to swap two elements in an array
void swap(vector<int>& arr, int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

// Partition function to rearrange the elements around a pivot
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[low]; // Choose the leftmost element as the pivot
    int i = low + 1; // Index of the first element greater than the pivot
    int j = high; // Index of the last element

    while (i <= j) {
        // Move `j` to the left while finding an element smaller than or equal to the pivot
        while (j >= i && arr[j] > pivot) {
            j--;
        }

        // Move `i` to the right while finding an element greater than the pivot
        while (i <= j && arr[i] <= pivot) {
            i++;
        }

        // Swap elements if `i` and `j` have not crossed each other
        if (i < j) {
            swap(arr, i, j);
            i++;
            j--;
        }
    }

    // Place the pivot element in its correct position
    swap(arr, low, j);
    return j; // Return the index of the pivot element
}

// Function to find the k-th smallest element in an array
int KthSmallest(vector<int>& arr, int low, int high, int k) {
    if (low <= high) {
        // Partition the array around pivot and get the partition index
        int pi = partition(arr, low, high);

        // If the pivot is the k-th smallest element
        if (pi + 1 == k) {
            return arr[pi];
        }
        // If the k-th smallest element is in the left partition
        else if (pi + 1 > k) {
            return KthSmallest(arr, low, pi - 1, k);
        }
        // If the k-th smallest element is in the right partition
        else {
            return KthSmallest(arr, pi + 1, high, k);
        }
    }
    // Return an error value if k is out of bounds
    return -1;
}

// Utility function to print an array
void printArray(const vector<int>& arr) {
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {5, 20, 10, 6, 7, 3};

    cout << "Original array: ";
    printArray(arr);
    int k = 3;
    int result = KthSmallest(arr, 0, arr.size() - 1, k);

    cout << k << "-th smallest element is " << result << endl;

    return 0;
}
