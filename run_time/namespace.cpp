#include <algorithm>
#include <iostream>
using namespace std;

void accumulate(int *arr, int *arr2, int n) {
    for (int i = 0; i < n; i++) {
        arr[i] += arr2[i];
    }
}

int main() {
    int arr[3] = {5, 7, 8};
    accumulate(arr, arr, 3);
    for (int i = 0; i < 3; i++)
        cout << arr[i] << ' ';
}
