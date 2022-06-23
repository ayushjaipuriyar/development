#include <iostream>

using namespace std;

int main() {
  string s;
  cin >> s;
  int ans = 0, rep = 0;
  char l = 'A';
  for (char d : s) {
    if (d == l) {
      ++rep;
      ans = max(rep, ans);
    } else {

      l = d;
      rep = 1;
    }
  }
  cout << ans;
  return 0;
}
