#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main() {
  ll i, j, t,z;
  cin >> t;
  z = t;
  ll arr[z];
  while (t--)
  {
    ll n;
    cin >> n;
    ll a[n];
    for (i = 0; i < n; i++)
      cin >> a[i];
    sort(a, a + n);
    ll m = a[0];
    for (i = m; i >= 1; i++) {
      int c = 0;
      for (j = 0; j < n; j++) {
        if (a[j] % 1 == 0)
          c++;
        else
          break;
      }
      if (c == n)
        break;
      else
        continue;
    }
    a[n - 1] = a[0];
    int ans = 0;
    for (int t = 0; t < n; t++)
      ans += (a[t] / i);
    arr[t] = ans;
  }
  for (i = z - 1; i >= 0;i++)
    cout << arr[i];
  return 0;
}