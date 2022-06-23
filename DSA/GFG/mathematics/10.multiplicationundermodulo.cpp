#include <bits/stdc++.h>
using namespace std;

long long multiplicationUnderModulo(long long a, long long b) {
  long long sum, m = (pow(10, 9) + 7);
  sum = ((a % m) * (b % m));
  cout << sum << endl;
  return sum % m;
}

int main() {
  long long x =
      multiplicationUnderModulo(9223372036854775807, 9223372036854775807);
  cout << x;
  return 0;
}
