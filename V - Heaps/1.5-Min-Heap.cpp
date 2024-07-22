#include <iostream>
#include <vector>
using namespace std;

class MinHeap
{
public:
    vector<int> arr;

    MinHeap(vector<int> &input)
    {
        arr = input;
        buildMinHeap();
    }

    void minHeapify(int i, int n)
    {
        int smallest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < n && arr[left] < arr[smallest])
        {
            smallest = left;
        }
        if (right < n && arr[right] < arr[smallest])
        {
            smallest = right;
        }
        if (smallest != i)
        {
            swap(arr[i], arr[smallest]);
            minHeapify(smallest, n);
        }
    }

    void buildMinHeap()
    {
        int n = arr.size();
        for (int i = n / 2 - 1; i >= 0; i--)
        {
            minHeapify(i, n);
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
    MinHeap minHeap(input);

    cout << "Min-Heap: ";
    minHeap.printHeap();

    return 0;
}
