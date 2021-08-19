#include <iostream>
using namespace std;

int main() {
  int n, i = 1, result = 1;
  cin >> n;

  if (n == 0 || n == 1)
    cout << "Square root is " << n;

  for (i = 1; result <= n; i++)
    result = i * i;
  cout << i - 2;
  return 0;
}
