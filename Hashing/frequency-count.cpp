#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements (0-100): ";

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int frequency[101] = {0};

    for (int i = 0; i < n; i++)
        frequency[arr[i]]++;

    cout << "Frequencies:" << endl;

    for (int i = 0; i <= 100; i++)
    {
        if (frequency[i] > 0)
            cout << i << " -> " << frequency[i] << endl;
    }

    return 0;
}