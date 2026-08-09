#include <iostream>
using namespace std;

int main()
{
    int a[10][10];
    int r, c;

    cout << "Enter rows and columns: ";
    cin >> r >> c;

    cout << "Enter matrix elements:\n";

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> a[i][j];

    cout << "Transpose:\n";

    for(int i = 0; i < c; i++)
    {
        for(int j = 0; j < r; j++)
            cout << a[j][i] << " ";

        cout << endl;
    }

    return 0;
}
