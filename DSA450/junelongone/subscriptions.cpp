#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long int n, x;
    cin >> n >> x;
    if (n >= 6)
      cout << (n / 6) * x << endl;
    else
      cout << n * x << endl;
  }
  return 0;
}
