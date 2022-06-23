#include <iostream>

using namespace std;

int main() {
  int arr1[1000], arr2[1000], arr3[1000], n, m, i, j, mid, flag, sum;
  cin >> n >> m;
  for (i = 0; i < n; i++)
    cin >> arr1[i];
  for (i = 0; i < m; i++)
    cin >> arr2[i];
  for (i = 0; i < n; i++)
    arr3[i] = arr1[i];
  for (i = 0; i < m; i++) {
    j = i + n;
    arr3[j] = arr2[i];
  }
  sum = m + n;
  mid = (n + m) / 2;

  if ((sum % 2) != 0) {
    flag = mid + 1;
    cout << arr3[flag] << " is the median";
  } else {
    flag = mid + 1;
    sum = (arr3[mid] + arr3[flag]) / 2;
    cout << sum << " is the median";
  }

  return 0;
}
