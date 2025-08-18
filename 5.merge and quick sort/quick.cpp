#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[low];  // pivot = first element
    int i = low - 1;
    int j = high + 1;

    while (true) {
        // Move i forward
        do {
            i++;
        } while (arr[i] < pivot);

        // Move j backward
        do {
            j--;
        } while (arr[j] > pivot);

        if (i >= j) return j;  // return partition index

        swap(arr[i], arr[j]);
    }
}

void quicksort(vector<int> &arr, int low, int high) {
    if (low < high) {
        int pindex = partition(arr, low, high);
        quicksort(arr, low, pindex);
        quicksort(arr, pindex + 1, high);
    }
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    quicksort(arr, 0, n - 1);

    for (int x : arr) cout << x << " ";
    return 0;
}
