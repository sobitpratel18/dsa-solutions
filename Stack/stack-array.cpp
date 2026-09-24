#include <iostream>
using namespace std;

#define MAX 100

int stackArr[MAX];
int top = -1;

void push(int value)
{
    if (top == MAX - 1)
    {
        cout << "Stack Overflow." << endl;
        return;
    }

    stackArr[++top] = value;
}

void pop()
{
    if (top == -1)
    {
        cout << "Stack Underflow." << endl;
        return;
    }

    cout << "Popped: " << stackArr[top--] << endl;
}

void display()
{
    if (top == -1)
    {
        cout << "Stack is empty." << endl;
        return;
    }

    cout << "Stack: ";

    for (int i = top; i >= 0; i--)
        cout << stackArr[i] << " ";

    cout << endl;
}

int main()
{
    push(10);
    push(20);
    push(30);

    display();

    pop();

    display();

    return 0;
}