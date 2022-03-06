#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
      cin >> a[i];
    int k = 0;
    for (int i = 0; i < n; i++) {
      int v = 1 + i + k;
      if (v == a[i])
        k++;
    }
    cout << k << endl;
  }
  return 0;
}

