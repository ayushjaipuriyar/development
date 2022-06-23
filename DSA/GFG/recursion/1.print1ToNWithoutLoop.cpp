#include <bits/stdc++.h>
using namespace std;

int printer(int n) {
  if (n < 1)
    return 1;
  cout << n;
  return printer(--n);
}

int main() { printer(9); }
