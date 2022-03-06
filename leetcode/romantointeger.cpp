#include <bits/stdc++.h>
using namespace std;

int value(char x) {
  switch (x) {
  case 'I':
    return 1;
    break;

  case 'V':
    return 5;
    break;

  case 'X':
    return 10;
    break;

  case 'L':
    return 50;
    break;
  case 'C':
    return 100;
    break;

  case 'D':
    return 500;
    break;

  case 'M':
    return 1000;
    break;
  }
  return -1;
}

int romanToInt(string& s) {
  int res = 0;
  for (int i = 0; i < s.length(); i++) {
    int s1 = value(s[i]);
    if (i + 1 < s.length()) {
      int s2 = value(s[i + 1]);
      if (s1 >= s2) {
        res = res + s1;
      } else {
        res = res + s2 - s1;
        i++;
      }
    } else {
      res = res + s1;
    }
  }
  return res;
}

int main() {
  string s = "III";
  int res = romanToInt(s);
  cout << res;
}
