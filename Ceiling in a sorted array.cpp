

#include <bits/stdc++.h>
using namespace std;

int ceilSearch(int arr[], int n, int x) {
    int i;
    if (x <= arr[0])
        return 0;
    for (i = 0; i < n - 1; i++) {
        if (arr[i] == x)
            return i;
        if (arr[i] < x && arr[i+1] >= x)
            return i+1;
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 8, 10, 10, 12, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 3;
    int index = ceilSearch(arr, n, x);
    if (index == -1)
        cout << "Ceiling of " << x << " doesn't exist in array ";
    else
        cout << "Ceiling of " << x << " is " << arr[index];
    return 0;
}
