#include <iostream>

using namespace std;

int main()
{
    int n, m;
    while (cin >> n)
    {
        if (n != m) {
            m = n;
            cout << m << " ";
        } else {
            cout << "";
        }
        if (n < 0) break;
    }

    return 0;
}
