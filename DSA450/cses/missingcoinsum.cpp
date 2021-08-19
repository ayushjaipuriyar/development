#include <bits/stdc++.h>
#include <iostream>
using namespace std;
const int mx = 2e5;
int main() {
  int n, arr[mx];
  long long ans = 1;
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  sort(arr, arr + n);
  for (int i = 0; i < n; i++) {
    if (ans < arr[i])
      break;
    else
      ans += arr[i];
  }
  cout << ans;
  return 0;
}
