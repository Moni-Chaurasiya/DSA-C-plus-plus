// Time Complexity of quick sort --> Avg case - O(nlogn)
//                               --> worst case - O(n^2)
// Space Complexity of quick sort --> O(logn)
// Internal sorting uses variation of quick sort. 
// Quick select
// Wherever there is no need of stability we use quick sort.

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

// Quicksort function
void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        // Partition the array around pivot and get the partition index
        int pi = partition(arr, low, high);

        // Recursively sort elements before and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Utility function to print an array
void printArray(const vector<int>& arr) {
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {5, 3, 1, 6, 7, 3};

    cout << "Original array: ";
    printArray(arr);

    quickSort(arr, 0, arr.size() - 1);

    cout << "Sorted array: ";
    printArray(arr);

    return 0;
}
