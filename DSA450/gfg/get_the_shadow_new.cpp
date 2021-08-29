#include <bits/stdc++.h>
using namespace std;

void printTwoElements(int arr[], int size) {
  int i;

  for (i = 0; i < size; i++) {
    if (arr[abs(arr[i]) - 1] > 0)
      arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
    else
      cout << abs(arr[i]) << " ";
  }

  for (i = 0; i < size; i++) {
    if (arr[i] > 0)
      cout << (i + 1) << endl;
  }
}

int main() {
  int t;
  cin >> t;
  while (t) {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
      cin >> arr[i];
    int z = sizeof(arr) / sizeof(arr[0]);
    printTwoElements(arr, z);
    t--;
  }
}
