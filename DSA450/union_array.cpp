#include <bits/stdc++.h>
using namespace std;

int main() {
  int arr1[] = {1, 2, 3, 4, 5};
  int arr2[] = {1, 2, 3, 4};
  int i = 0, j = 0, m = sizeof(arr1), n = sizeof(arr2);
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

  /* Print remaining elements of the larger array */
  while (i < m)
    cout << arr1[i++] << " ";

  while (j < n)
    cout << arr2[j++] << " ";
  return 0;
}
