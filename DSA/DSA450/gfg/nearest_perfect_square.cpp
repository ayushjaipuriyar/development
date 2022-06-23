#include <bits/stdc++.h>

using namespace std;

bool isPerfect(int N) {
  if ((sqrt(N) - floor(sqrt(N))) != 0)
    return false;
  return true;
}
void getClosestPerfectSquare(int N) {
  long long aboveN = -1, belowN = -1;
  long long n1;

  n1 = N + 1;
  while (true) {
    if (isPerfect(n1)) {
      aboveN = n1;
      break;
    } else
      n1++;
  }

  n1 = N - 1;
  while (true) {
    if (isPerfect(n1)) {
      belowN = n1;
      break;
    } else
      n1--;
  }
  int diff1 = aboveN - N;
        int diff2 = N - belowN;
 
        if (diff1 > diff2)
            cout<<belowN;
        else
            cout<<aboveN;

}

int main() {
  int t;
  long long n;
  cin >> t;
  while(t--) {
    cin >> n;
    getClosestPerfectSquare(n);
    cout << endl;
  }
  return 0;
}
