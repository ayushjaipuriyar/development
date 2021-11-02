#include <bits/stdc++.h>
using namespace std;

void kth_element(int arr[], int n, int k) {
  /* sort(arr,arr+n); */
  int i, key, j;
  for (i = 1; i < n; i++) {
    key = arr[i];
    j = i - 1;
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = key;
  }
  cout << arr[0];
}
int main() {
  int arr[] = {7, 10, 4, 3, 20, 15};
  int k = 3;
  int size = sizeof(arr) / sizeof(arr[0]);
  kth_element(arr, size, k);
}
