#include <bits/stdc++.h>
using namespace std;
//
// int checker(string res){
//   //
// }

int main() {
  int t;
  cin >> t;
  while (t--) {
    int x;
    cin >> x;
    string res;
    cin >> res;
    int N = 0, C = 0, D = 0;
    for (int i = 0; i < 14; i++) {
      if (res[i] == 'C')
        C++;
      else if (res[i] == 'N')
        N++;
      else if (res[i] == 'D')
        D++;
    }
    if (C > N)
      cout << 60 * x << endl;
    else if (C < N)
      cout << 40 * x << endl;
    else
      cout << 55 * x << endl;
  }
  return 0;
}
