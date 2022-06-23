#include <iostream>

using namespace std;

int main() {

  int n;
  cin >> n;
  while (n--) {
    int x, y;
    cin >> x >> y;
    cout << ((x + y) % 3 == 0 && 2 * x >= y && 2 * y >= x ? "YES" : "NO")
         << "\n";
  }
  return 0;
}
