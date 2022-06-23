#include <iostream>
#define N 4
#define M 4
using namespace std;

int main() {
  int count = 0, max = 0, flag;
  int Arr[N][M] = {{0, 1, 1, 1}, {0, 0, 1, 1}, {1, 1, 1, 1}, {0, 0, 0, 0}};
  for (int i = 0; i < N; i++) {
    max = 0;
    for (int j = 0; j < M; j++) {
      if (Arr[i][j] == 1) {
        max++;
        if (count < max) {
          flag = i;
          count = max;
        }
      }
    }
  }
  cout << flag;
  return 0;
}
