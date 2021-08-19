#include <bits/stdc++.h>
#include <iostream>

using namespace std;
const int max_num = 2e5;
int main() {
  int n, x, weights[max_num], count = 0;
  cin >> n >> x;
  for (int i = 0; i < n; i++)
    cin >> weights[i];
  sort(weights, weights + n);
  for (int i = 0, j = n - 1; i < j;) {
    while (i < j && weights[i] + weights[j] > x)
      --j;
    if (i >= j)
      break;
    ++count, ++i, --j;
  }
  cout << n - count;
  return 0;
}
