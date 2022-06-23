#include <iostream>
#include <math.h>

using namespace std;

void threeWayPartition(int arr[], int n, int lowVal, int highVal) {
  int start = 0, end = n - 1;

  for (int i = 0; i <= end;) {
    if (arr[i] < lowVal)
      swap(arr[i++], arr[start++]);

    else if (arr[i] > highVal)
      swap(arr[i], arr[end--]);

    else
      i++;
  }
}

int main() {
  int arr[1000], n, i, j, k;
  cin >> n;
  for (i = 0; i < n; i++)
    cin >> arr[i];
  cin >> j >> k;
  threeWayPartition(arr, n, j, k);
  for (int i = 0; i < n; i++)
    cout << "\t" << arr[i];
  return 0;
}
