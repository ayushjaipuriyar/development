#include <iostream>
using namespace std;

int countops(int n) {
  if (n == 1)
    return 0;
  else if (n % 2 == 0)
    return 1 + countops(n / 2);
  else
    return 1 + min(countops(n - 1), countops(n + 1));
}

int main() {
  int n, count = 0;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  for (int i = 0; i < n; i++)
    cout << countops(arr[i]) << endl;

  return 0;
}
