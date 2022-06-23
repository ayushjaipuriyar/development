#include <bits/stdc++.h>

using namespace std;

double termOfGP(int A, int B, int N) {
  double res = 0;
  if (N == 1)
    res = A;

  else {
    res = (A * pow((double)(B / A), N - 1));
  }
  return res;
}

int main() {
  double x = termOfGP(84, 87, 3);
  cout << x;
  return 0;
}
