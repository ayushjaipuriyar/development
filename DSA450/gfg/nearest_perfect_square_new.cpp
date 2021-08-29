#include <bits/stdc++.h>

using namespace std;

void getClosestPerfectSquare(long long n) {
  float sq = sqrt(n);

  int lower = int(sq);
  int upper = lower + 1;
  if ((sqrt(n) - floor(sqrt(n))) == 0) {
    lower--;
    upper++;
  }
  long long lower_sq = lower * lower;
  long long upper_sq = upper * upper;
  long long lower_dist = n - lower_sq;
  long long upper_dist = upper_sq - n;
  if (lower_dist < upper_dist)
    cout << lower_sq;
  else
    cout << upper_sq;
}

int main() {
  int t;
  long long n;
  cin >> t;
  while (t--) {
    cin >> n;
    getClosestPerfectSquare(n);
    cout << endl;
  }
  return 0;
}
