#include <bits/stdc++.h>
using namespace std;

void reversearr(int r, int l, int a[])
{
    if (r >= l)
        return;
    swap(a[r], a[l]);
    reversearr(r + 1, l - 1, a);
}

int main()
{
    int n;
    cin >> n;
    int l = n - 1;
    int a[n];
    for (int k = 0; k < n; k++)
    {
        cin >> a[k];
    }
    reversearr(0, l, a);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}