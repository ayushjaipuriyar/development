#include <bits/stdc++.h>

using namespace std;

int main() {
  int x = m ^ n;
  cout << log2(x & ~(x - 1)) + 1;
}
