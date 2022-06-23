#include <bits/stdc++.h>
#include <iostream>

using namespace std;
const int mx = 2e5;
int main() {
  bool z;
  long long n, x, arr[mx];
  cin >> n >> x;
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  for (int i = 0; i < n; i++) {
    for (int j = 1; j < n - 1 && j != i; j++)
      if (arr[i] + arr[j] == x) {
        cout << j + 1 << " " << i + 1;
      } else
        z = false;
  }
  if (!z)
    cout << "IMPOSSIBLE";
}
