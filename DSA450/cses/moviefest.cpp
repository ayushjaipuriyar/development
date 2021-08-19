#include <bits/stdc++.h>
#include <iostream>
using namespace std;
const int mx = 2e5;

void insertionSort(int arr1[], int arr2[], int n) {
  int i, k1, k2, j;
  for (i = 1; i < n; i++) {
    k1 = arr1[i];
    k2 = arr2[i];
    j = i - 1;

    while (j >= 0 && arr1[j] > k1) {
      arr1[j + 1] = arr1[j];
      arr2[j + 1] = arr2[j];
      j = j - 1;
    }
    arr1[j + 1] = k1;
    arr2[j + 1] = k2;
  }
}

int main() {
  int n, x[mx], y[mx], count = 1;
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> x[i] >> y[i];
  insertionSort(x, y, n);

  // NEED FIX FOR FIRST ENTRY END TIME BEING VERY BIG
  // NEED TO REDUCE THE TIME

  for (int i = 0; i < n; i++) {
    if (y[i] > x[i + 1])
      continue;
    else
      ++count;
  }
  cout << count;
  return 0;
}
