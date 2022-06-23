#include <iostream>
using namespace std;

void findCommon(int ar1[], int ar2[], int ar3[], int n1, int n2, int n3) {
  int i = 0, j = 0, k = 0;
  while (i < n1 && j < n2 && k < n3) {
    if (ar1[i] == ar2[j] && ar2[j] == ar3[k]) {
      cout << ar1[i] << " ";
      i++;
      j++;
      k++;
    } else if (ar1[i] < ar2[j])
      i++;
    else if (ar2[j] < ar3[k])
      j++;
    else
      k++;
  }
}

int main() {
  int arr1[1000], arr2[1000], arr3[1000], n, m, k, i;
  cin >> n >> m >> k;
  for (i = 0; i < n; i++)
    cin >> arr1[n];

  for (i = 0; i < m; i++)
    cin >> arr1[m];
  for (i = 0; i < k; i++)
    cin >> arr1[k];
  findCommon(arr1, arr2, arr3, n, m, k);
  return 0;
}
