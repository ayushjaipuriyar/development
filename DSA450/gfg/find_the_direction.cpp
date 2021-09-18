#include <bits/stdc++.h>
using namespace std;
int main() {
  int t, x, ans;
  cin >> t;
  while (t) {
    cin >> x;
    ans = x % 4;
    switch (ans) {
    case 0:
      cout << "North" << endl;
      break;
    case 1:
      cout << "East" << endl;
      break;

    case 2:
      cout << "South" << endl;
      break;
    case 3:
      cout << "West" << endl;
      break;
    }
    t--;
  }
  return 0;
}
