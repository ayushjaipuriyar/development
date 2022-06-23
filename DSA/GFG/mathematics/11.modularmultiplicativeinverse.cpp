#include <bits/stdc++.h>
using namespace std;

int modInverse(int a, int m) {
  a = a % m;
  for (int i = 0; i < m; i++) {
    if ((a * i) % m == 1)
      return i;
  }
  return -1;
}

int main() {
  int x = modInverse(10, 17);
  cout << x;
  return 0;
}
