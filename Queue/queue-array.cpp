#include <iostream>
using namespace std;

#define MAX 100

int queueArr[MAX];
int front = -1;
int rear = -1;

void enqueue(int value)
{
    if (rear == MAX - 1)
    {
        cout << "Queue Overflow." << endl;
        return;
    }

    if (front == -1)
        front = 0;

    queueArr[++rear] = value;
}

void dequeue()
{
    if (front == -1 || front > rear)
    {
        cout << "Queue Underflow." << endl;
        return;
    }

    cout << "Dequeued: " << queueArr[front++] << endl;
}

void display()
{
    if (front == -1 || front > rear)
    {
        cout << "Queue is empty." << endl;
        return;
    }

    cout << "Queue: ";

    for (int i = front; i <= rear; i++)
        cout << queueArr[i] << " ";

    cout << endl;
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    dequeue();

    display();

    return 0;
}