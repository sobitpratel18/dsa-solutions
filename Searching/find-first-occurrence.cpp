#include <iostream>
using namespace std;

int main()
{
    int n, key;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter element to find: ";
    cin >> key;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "First occurrence found at index " << i << endl;
            return 0;
        }
    }

    cout << "Element not found." << endl;

    return 0;
}