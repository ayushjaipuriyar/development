#include <bits/stdc++.h>
#include <iostream>
using namespace std;
const int mx = 2e5;
int main() {
  int n, arr[mx];
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  sort(arr, arr + n);
  int x = arr[n / 2];
  long long ans;
  for (int i = 0; i < n; i++)
    ans += abs(arr[i] - x);
  cout << ans;
}
