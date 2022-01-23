#include <algorithm>
#include <bits/stdc++.h>
#include <functional>
using namespace std;

int main() {
  int t, x, n;
  cin >> t;
  while (t--) {
    cin >> n >> x;
    int arr[n];
    bool flag = false;
    for (int i = 0; i < n; i++)
      cin >> arr[i];
    sort(arr, arr + n, greater<>());
    int sum = 0;
    int i;
    for (i = 0; i < n; i++) {
      sum += arr[i];
      if (sum >= x) {
        flag = true;
        break;
      }
    }
    if (flag)
      cout << i + 1 << endl;

    else
      cout << "-1\n";
  }
}
