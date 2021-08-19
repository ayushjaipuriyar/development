#include <iostream>
using namespace std;

int main() {
  int arr[1000], n, i, jump, flag = 0;
  cin >> n;
  for (i = 0; i < n; i++)
    cin >> arr[i];
  jump = 1;
  i = 0;
  while (i < n) {
    i = jump + i;
    jump = jump + arr[i];
    flag++;
  }
  cout << flag;
  return 0;
}
