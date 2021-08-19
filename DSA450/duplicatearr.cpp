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

void dup_find(int arr[], int n) {
  int i, flag;
  for (i = 0; i < n; i++) {
    if (arr[i] == arr[i + 1])
      flag = arr[i];
  }
  cout << "The duplicate number is : " << flag;
}

int main() {
  int arr[1000], n, i;
  cin >> n;
  for (i = 0; i < n; i++)
    cin >> arr[i];
  insertionSort(arr, n);
  dup_find(arr, n);
  return 0;
}
