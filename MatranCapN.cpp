#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][n];

    for (int j = 0; j < n; j++)
    {
        a[0][j] = j + 1;
        cout << a[0][j] << " ";
    }
    cout << endl;

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i+j < n) {
                cout << a[0][j+i] << " ";
            } else {
                cout << a[0][j+i-n] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
