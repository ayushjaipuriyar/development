#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  long long ans = 0;
  for (long i = 5; i <= n; i *= 5)
    ans += n / i;
  cout << ans;
  return 0;
}
