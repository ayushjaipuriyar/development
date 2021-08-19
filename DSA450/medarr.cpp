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
  int arr[1000], n, i, flag;
  cin >> n;
  for (i = 0; i < n; i++)
    cin >> arr[i];
  flag = n / 2;
  if (n % 2 == 0)
    cout << "median is " << arr[flag + 1];
  else {
    int sum;
    sum = (arr[flag] + arr[flag + 1]) / 2;
    cout << "median is " << sum;
  }
  return 0;
}
