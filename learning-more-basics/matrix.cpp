#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int matrix[3][3];
    int row = 3;
    int column = 3;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> matrix[i][j];
        }

    }
     for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << matrix[i][j]<<" ";
        }
        cout<<endl;

    }
}
