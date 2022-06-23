#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  long long int n, d, res;
  cin >> t;
  while (t--) {
    cin >> n >> d;
    res = 1;
    for (int i = 1; i <= d && res < n; i++) {
      if (i <= 10 && i >= 1) {
        res = res * 2;
      } else {
        res = res * 3;
      }
    }
    if (res < n) {
      cout << res << endl;
    } else {
      cout << n << endl;
    }
  }
}
