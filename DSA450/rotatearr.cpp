#include <iostream>

using namespace std;

int main() {
  int arr[1000], n, i;
  cin >> n;
  for (i = 0; i < n; i++)
    cin >> arr[i];
  int temp, replace;
  temp = arr[n - 1];
  for (i = n - 1; i > 0; i--)
    arr[i] = arr[i - 1];
  arr[0] = temp;
  for (i = 0; i < n; i++)
    cout << arr[i];
  return 0;
}
