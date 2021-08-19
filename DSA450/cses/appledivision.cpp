#include <bits/stdc++.h>
#include <iostream>

using namespace std;
int main() {
  int n, arr[20];
  cin >> n;
  long long s = 0, ans;
  for (int i = 0; i < n; i++) {

    cin >> arr[i];
    s += arr[i];
  }
  for (int i = 0; i < 1 << n; ++i)
    cout << 2 * s - ans;
  return 0;
}
