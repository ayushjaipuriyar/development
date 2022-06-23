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

int main() {
  int arr[1000], k, j, n;
  cout << "Enter the number of elements : ";
  cin >> n;
  cout << "Enter the elements : ";
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  cout << "Enter the kth number : ";
  cin >> k;
  insertionSort(arr, n);
  cout << arr[k - 1] << " is the desired kth smallest number\n";
  return 0;
}
