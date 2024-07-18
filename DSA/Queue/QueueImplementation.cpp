#include <iostream>
using namespace std;

class Queue{
public:
    int *arr;
    int qfront;
    int rare;
    int size;
    Queue()
    {
        // Implement the Constructor
        size = 10001;
        arr = new int[size];
        qfront = 0;
        rare = 0;
    }

    bool isEmpty()
    {
        // Implement the isEmpty() function
        if (qfront == rare)
        {
            return true;
        }
        return false;
    }

    void enqueue(int data)
    {
        // Implement the enqueue() function
        if (rare == size)
        {
            return;
        }
        else
        {
            arr[rare] = data;
            rare++;
        }
    }

    int dequeue()
    {
        // Implement the dequeue() function
        if (qfront == rare)
        {
            return -1;
        }

        int element = arr[qfront];
        arr[qfront] = -1;
        qfront++;

        if (qfront == rare)
        {
            qfront = 0;
            rare = 0;
        }
        return element;
    }

    int front()
    {
        // Implement the front() function
        if (qfront == rare)
        {
            return -1;
        }
        return arr[qfront];
    }
};

int main(){

    Queue* q = new Queue();
    q->enqueue(10);
    cout << q->front() << endl;

    q->enqueue(12);
    cout << q->front() << endl;
    q->dequeue();
    
    q->enqueue(13);
    cout << q->front() << endl;

    q->enqueue(14);
    cout << q->front() << endl;

    return 0;
}