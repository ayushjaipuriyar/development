#include <bits/stdc++.h>

using namespace std;

int main() {
  int t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    int mat[3][3];
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        cin >> mat[i][j];
      }
    }
    int upper = mat[0][1] + mat[0][2] + mat[1][2];
    int lower = mat[1][0] + mat[2][0] + mat[2][1];
    int d = max(upper, lower);
    cout << d << endl;
  }
}
