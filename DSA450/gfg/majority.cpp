#include <bits/stdc++.h>

using namespace std;
int majorityWins(int arr[], int n, int x, int y) {
  int count_x = 0, count_y = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] == x)
      count_x++;
    if (arr[i] == y)
      count_y++;
  }
  if ( count_x > count_y)
    cout << x;
  else if (count_x == count_y)
    cout << ((x < y) ? x : y);
  else
    cout << y;
  return 0;
}
int main() {
  int N = 5, x = 13, y = 32, arr[5] = {40, 85, 9, 14, 53};
  majorityWins(arr, N, x, y);
  return 0;
}
