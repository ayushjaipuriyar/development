#include <bits/stdc++.h>

using namespace std;

long long toh(int N, int from, int to, int aux) {
  if (N > 0) {
    toh(N - 1, from, aux, to);
    cout << "move disk " << N << " from rod " << from << " to rod " << to
         << endl;
    toh(N - 1, aux, to, from);
  }
  return pow(2, N) - 1;
}

int main() {}
