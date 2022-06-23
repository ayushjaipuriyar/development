#include <bits/stdc++.h>
using namespace std;

long long sumUnderModulo(long long a, long long b) {
  long long sum, m = (pow(10, 9) + 7);
  sum = (a % m + b % m);
  return sum % m;
}

int main() {
  long long x = sumUnderModulo(9223372036854775807, 9223372036854775807);
  cout << x;
  return 0;
}
