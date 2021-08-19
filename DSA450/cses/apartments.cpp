#include <bits/stdc++.h>
#include <iostream>
using namespace std;

const int mn = 2e5;
int main() {
  long n, m, k, nas[mn], mas[mn], count = 0;
  cin >> n >> m >> k;
  for (int i = 0; i < n; i++)
    cin >> nas[i];
  for (int i = 0; i < m; i++)
    cin >> mas[i];
  sort(nas, nas + n);
  sort(mas, mas + m);
  for (int i = 0, j = 0; i < n; i++) {
    while (j < m && mas[j] < nas[i] - k)
      ++j;
    if (j < m && mas[j] <= nas[i] + k)
      ++count, ++j;
  }

  cout << endl << count;
  return 0;
}
