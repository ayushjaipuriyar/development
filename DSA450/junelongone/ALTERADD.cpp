#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long int a, b;
    cin >> a >> b;
    for (int i = 1; i < INT_MAX; i++) {
      if (a > b)
        break;
      if (i % 2 == 0)
        a += 2;
      else
        a++;
    }
    if (a == b)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}
