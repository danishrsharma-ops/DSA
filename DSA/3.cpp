#include <iostream>
using namespace std;

int main()
{
    int a[100], n, k, choice;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter K: ";
    cin >> k;

    cout << "\n1. Left Rotation";
    cout << "\n2. Right Rotation";
    cout << "\nEnter choice: ";
    cin >> choice;

    k = k % n;

    if(choice == 1)
    {
        // Left rotation
        for(int x = 0; x < k; x++)
        {
            int first = a[0];

            for(int i = 0; i < n - 1; i++)
                a[i] = a[i + 1];

            a[n - 1] = first;
        }
    }
    else if(choice == 2)
    {
        // Right rotation
        for(int x = 0; x < k; x++)
        {
            int last = a[n - 1];

            for(int i = n - 1; i > 0; i--)
                a[i] = a[i - 1];

            a[0] = last;
        }
    }

    cout << "Array after rotation: ";

    for(int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
