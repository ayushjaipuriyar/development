#include <bits/stdc++.h>
using namespace std;

int digitalRoot(int n) {
  if (n / 10 == 0)
    return n;
  return digitalRoot((n % 10) + digitalRoot(n / 10));
}

int main() {
  int v = digitalRoot(9999);
  cout << v;
}
