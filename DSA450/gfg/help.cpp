#include <climits>
#include <iostream>

using namespace std;

int base(int n, int i) {
  int sum = 0, d;
  while (n != 0) {
    d = n % i;
    sum += d;
    n = n / i;
  }
  return sum;
  // sum=0;
}
int main() {
  int q, min = INT_MAX, minc, l, r, n;
  cin >> q;
  while (q--) {
    cin >> n >> l >> r;
    for (int i = l; i <= r; i++) {
      if (base(n, i) < min) {
        min = base(n, i);
        minc =i;
      }
    }
    cout << minc << endl;
    min = INT_MAX;
  }
  return 0;
}
