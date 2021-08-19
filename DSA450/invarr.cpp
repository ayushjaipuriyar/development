#include <iostream>

using namespace std;

int insertionSort(int arr[], int n) {
  int i, key, j, flag = 0;
  for (i = 1; i < n; i++) {
    key = arr[i];
    j = i - 1;
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j = j - 1;
      flag++;
    }
    arr[j + 1] = key;
  }
  return flag;
}

int main() {
  int arr[1000], n, i, inversions;
  cin >> n;
  for (i = 0; i < n; i++)
    cin >> arr[i];
  inversions = insertionSort(arr, n);
  cout << "The number of inversions are " << inversions;

  return 0;
}
