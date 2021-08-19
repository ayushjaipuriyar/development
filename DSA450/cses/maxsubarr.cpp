#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  long long ans = -1e18, msf = -1e18, a;
  for (int i = 0; i < n; i++) {
    cin >> a;
    msf = max(a, msf + a);
    ans = max(ans, msf);
  }
  cout << ans;
  return 0;
}
