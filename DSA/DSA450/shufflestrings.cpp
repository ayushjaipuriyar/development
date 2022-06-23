#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

bool checklength(string strA, string strB, string str) {
  int cat_lenght = strA.length() + strB.length();
  if (str.length() != cat_lenght)
    return false;
  else
    return true;
}

int main() {
  string strA, strB, str;
  cin >> strA >> strB >> str;
  if (checklength(strA, strB, str)) {
    sort(str.begin(), str.end());
    string cat_string = strA + strB;
    sort(cat_string.begin(), cat_string.end());
    cout << str << cat_string;
    if (str.compare(cat_string) == 0)
      cout << endl << "Given string is a shuffle of two other string";
  }
  return 0;
}
