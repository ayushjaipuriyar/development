#include <bits/stdc++.h>

using namespace std;

int main() {
  int t, d1, d2, d3, s1, s2, s3;
  cin >> t;
  while (t--) {
    cin >> d1 >> d2 >> d3;
    cin >> s1 >> s2 >> s3;
    int rd, rs;
    rd = d1 + d2 + d3;
    rs = s1 + s2 + s3;
    if (rd > rs)
      cout << "Dragon\n";
    else if (rd < rs)
      cout << "Sloth\n";
    else {
      if (d1 > s1)
        cout << "Dragon\n";
      else if (d1 < s1)
        cout << "Sloth\n";
      else {
        if (d2 > s2)
          cout << "Dragon\n";
        else if (d2 < s2)
          cout << "Sloth\n";
        else {
          cout << "Tie\n";
        }
      }
    }
  }
}
