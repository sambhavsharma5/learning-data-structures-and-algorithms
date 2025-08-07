#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
#include <unordered_set>
using namespace std;

void print1(int n)
{
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        cout << endl;
    }
}
void print2(int n)
{
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }

        cout << endl;
    }
}
void print3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n - i; j > 0; j--)
        {
            cout << "*" << " ";
        }

        cout << endl;
    }
}
void print4(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - (i + 1); j++)
        {
            cout << " ";
        }
        for (int k = 0; k < (i * 2) + 1; k++)
        {
            cout << "*";
        }
        for (int l = n - (i + 1); l > 0; l--)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void print5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n - i - 1; k++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void print6(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - (i + 1); j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << "*";
        }
        for (int l = 0; l < n - (i + 1); l++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void print7(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * n - (2 * i + 1); k++)
        {
            cout << "*";
        }
        for (int l = 0; l < i; l++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void print8(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - (i + 1); j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << "*";
        }
        for (int l = 0; l < n - (i + 1); l++)
        {
            cout << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * n - (2 * i + 1); k++)
        {
            cout << "*";
        }
        for (int l = 0; l < i; l++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void print9(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < i + 1; k++)
        {
            cout << "*";
        }
        for (int l = 0; l < n - (i + 1); l++)
        {
            cout << " ";
        }
        cout << endl;
    }
    for (int i = 1; i < n; i++)
    {
        for (int k = n - i; k > 0; k--)
        {
            cout << "*";
        }
        for (int l = 0; l < i; l++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
int main()
{
    print1(5);
    print2(5);
    print3(5);
    print4(5);
    print5(5);
    print6(5);
    print7(5);
    print8(5);
    print9(5);

    return 0;
}
