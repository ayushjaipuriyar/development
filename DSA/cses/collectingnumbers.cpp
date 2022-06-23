#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
const int mx = 2e5;
void selectionSort(int arr[], int n) {
  int i, j, min_idx, count = 0;
  for (i = 0; i < n - 1; i++) {
    min_idx = i;
    for (j = i + 1; j < n; j++)
      if (arr[j] < arr[min_idx])

        count++;
  }
  cout << count - i;
}

int main() {
  int n, arr[mx];
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  selectionSort(arr, n);
}
