#include <cstring>
#include <iostream>
using namespace std;

int val(char r) {
  if (r == 'I')
    return 1;
  if (r == 'V')
    return 5;
  if (r == 'X')
    return 10;
  if (r == 'L')
    return 50;
  if (r == 'C')
    return 100;
  if (r == 'D')
    return 500;
  if (r == 'M')
    return 1000;

  return -1;
}

int main() {
  int n, res = 0;
  char str1[] = "MCMIV";
  n = strlen(str1);
  for (int i = 0; i < n; i++)
    res = res + val(str1[i]);
  cout << endl << res;
  return 0;
}
