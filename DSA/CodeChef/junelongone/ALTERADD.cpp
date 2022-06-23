#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long int a, b;
    cin >> a >> b;
    if ((b - a) % 3 != 2)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}
