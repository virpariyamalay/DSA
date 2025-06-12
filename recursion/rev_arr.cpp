#include<iostream>
using namespace std;

void reverse_arr(int i, int arr[], int n) {
    if (i > n / 2) return;
    swap(arr[i], arr[n - i + 1]);
    reverse_arr(i + 1, arr, n);
}

int main() {
    int i=1;
    int n;
    cin >> n;
    int arr[n + 1];  // Extra space for 1-based indexing

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    reverse_arr(i, arr, n);  // Start from index 1

    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
