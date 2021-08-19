#include <iostream>

using namespace std;

int main() {
  int arr[1000], n, k, i, j, flag = 0;
  cin >> n >> k;
  for (i = 0; i < n; i++)
    cin >> arr[i];
  for (i = 0; i < n; i++)
    for (j = i + 1; j < n; j++)
      if ((arr[i] + arr[j]) == k) {
        flag++;
        cout << endl << i << "\t" << j;
      }

  cout << endl << flag;
  return 0;
}
