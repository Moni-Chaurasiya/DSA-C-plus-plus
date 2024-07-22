#include <iostream>
#include <vector>
using namespace std;

class MaxHeap
{
public:
    vector<int> arr;

    MaxHeap(vector<int> &input)
    {
        arr = input;
        buildMaxHeap();
    }

    void maxHeapify(int i, int n)
    {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < n && arr[left] > arr[largest])
        {
            largest = left;
        }
        if (right < n && arr[right] > arr[largest])
        {
            largest = right;
        }
        if (largest != i)
        {
            swap(arr[i], arr[largest]);
            maxHeapify(largest, n);
        }
    }

    void buildMaxHeap()
    {
        int n = arr.size();
        for (int i = n / 2 - 1; i >= 0; i--)
        {
            maxHeapify(i, n);
        }
    }

    void printHeap()
    {
        for (int i = 0; i < arr.size(); ++i)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    vector<int> input = {4, 10, 3, 5, 1};
    MaxHeap maxHeap(input);

    cout << "Max-Heap: ";
    maxHeap.printHeap();

    return 0;
}
