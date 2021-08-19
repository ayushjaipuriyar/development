#include <iostream>

using namespace std;

void insertionSort(int arr[], int n) {
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
}

void printUnion(int arr1[], int arr2[], int m, int n) {
  int i = 0, j = 0;
  while (i < m && j < n) {
    if (arr1[i] < arr2[j])
      cout << arr1[i++] << " ";

    else if (arr2[j] < arr1[i])
      cout << arr2[j++] << " ";

    else {
      cout << arr2[j++] << " ";
      i++;
    }
  }

  while (i < m)
    cout << arr1[i++] << " ";

  while (j < n)
    cout << arr2[j++] << " ";
}

int main() {
  int arr1[1000], arr2[1000], n, m, i;
  cin >> n >> m;
  for (i = 0; i < n; i++)
    cin >> arr1[i];
  for (i = 0; i < m; i++)
    cin >> arr2[i];
  insertionSort(arr1, n);
  insertionSort(arr2, m);
  printUnion(arr1, arr2, n, m);
  return 0;
}
