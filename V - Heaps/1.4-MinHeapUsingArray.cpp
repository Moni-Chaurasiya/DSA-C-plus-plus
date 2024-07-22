
#include <iostream>
using namespace std;

class minHeap
{
public:
    int arr[100];
    int idx;

    minHeap()
    {
        idx = 1;
    }

    int top()
    {
        if (idx > 1)
        {
            return arr[1];
        }
        else
        {
            throw runtime_error("Heap is empty");
        }
    }

    void push(int x)
    {
        if (idx >= 100)
        {
            throw runtime_error("Heap overflow");
        }
        arr[idx] = x;
        int i = idx;
        idx++;
        while (i != 1)
        {
            int parent = i / 2;
            if (arr[parent] > arr[i])
            {
                swap(arr[parent], arr[i]);
            }
            else
            {
                break;
            }
            i = parent;
        }
    }

    void pop()
    {
        if (idx <= 1)
        {
            throw runtime_error("Heap is empty");
        }
        arr[1] = arr[idx - 1];
        idx--;
        heapifyDown(1);
    }

    int size()
    {
        return idx - 1;
    }

private:
    void heapifyDown(int i)
    {
        int smallest = i;
        int left = 2 * i;
        int right = 2 * i + 1;

        if (left < idx && arr[left] < arr[smallest])
        {
            smallest = left;
        }
        if (right < idx && arr[right] < arr[smallest])
        {
            smallest = right;
        }
        if (smallest != i)
        {
            swap(arr[i], arr[smallest]);
            heapifyDown(smallest);
        }
    }
};

int main()
{
    minHeap pq;
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(5);
    pq.push(1);

    cout << "Top element: " << pq.top() << endl;

    pq.pop();
    cout << "Top element after pop: " << pq.top() << endl;

    cout << "Heap size: " << pq.size() << endl;

    return 0;
}

/*
#include <iostream>
#include <vector>
using namespace std;
class minHeap
{
    public:
       int arr[100];
       int idx=1;
       minHeap(){
        idx=1;
       }
       int top(){
        return arr[1];
       }
       void push(int x){
        arr[idx]=x;
        int i=idx;
        idx++;
        while(i!=1){
            int parent = i/2;
            if(arr[parent]>arr[i]){
                swap(arr[parent],arr[i]);
            }else break;
            i=parent;
        }
       }
       int size(){
        return idx-1;
       }
};
int main()
{
    minHeap pq;
    pq.push(10);
    pq.push(20);
    pq.push(30);

}
*/
