#include <iostream>
using namespace std;

void rev(int n, int a[])
{
    if (n == 0)
    {
        return;
    }
    else
    {
        cout << a[n - 1] << " ";
        rev(n - 1, a);
    }
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int a[] = {9, 15, 2, 98, 47, 66, 82, 12, 53};
        int n = sizeof(a) / sizeof(a[0]);
        rev(n, a);
    }
}