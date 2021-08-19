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

int removeDuplicates(int arr[], int n) {
  if (n == 0 || n == 1)
    return n;

  int temp[n];

  int j = 0;
  for (int i = 0; i < n - 1; i++)

    if (arr[i] != arr[i + 1])
      temp[j++] = arr[i];

  temp[j++] = arr[n - 1];

  for (int i = 0; i < j; i++)
    arr[i] = temp[i];

  return j;
}

void longestseq(int arr[], int n) {

  int i, j;
  for (i = 0; i < n; i++) {
    j = i + 1;
    if (arr[i] != (arr[j] + 1))
      cout << arr[i] << "\t";
  }
}

int main() {
  int arr[1000], n, i;
  cin >> n;
  for (i = 0; i < n; i++)
    cin >> arr[i];
  insertionSort(arr, n);
  n = removeDuplicates(arr, n);
  longestseq(arr, n);

  return 0;
}
