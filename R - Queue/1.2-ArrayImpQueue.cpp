#include <iostream>
using namespace std;

class Queue
{
public:
    int f_idx;
    int b_idx;
    int arr[5];
    Queue()
    {
        f_idx = 0;
        b_idx = 0;
    }
    void push(int val)
    {
        if (b_idx == 5)
        {
            cout << "Queue is full" << endl;
            return;
        }
        arr[b_idx] = val;
        b_idx++;
    }

    void pop()
    {
        if (b_idx - f_idx == 0)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        f_idx++;
    }

    int front()
    {
        if (b_idx - f_idx == 0)
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[f_idx];
    }

    int back()
    {
        if (b_idx - f_idx == 0)
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[b_idx - 1];
    }

    int size()
    {
        return b_idx - f_idx;
    }

    bool empty()
    {
        return f_idx == b_idx;
    }

    void display()
    {
        if (b_idx - f_idx == 0)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        for (int i = f_idx; i < b_idx; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.display();
    q.push(50);
    q.display();
    q.push(60);
    q.push(70);
    q.push(80);
    q.push(90);
    q.display();
    q.pop();
    q.display();

    return 0;
}