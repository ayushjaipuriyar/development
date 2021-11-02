#include <bits/stdc++.h>
using namespace std;

void minmax(int arr[], int n) {
  int min = 0, max = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] > max)
      max = arr[i];
    if (arr[i] < min)
      min = arr[i];
  }
  cout << endl << min << endl << max;
}

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int size = sizeof(arr) / sizeof(arr[0]);
  minmax(arr, size);
}
