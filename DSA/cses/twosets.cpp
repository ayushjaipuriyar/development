#include <iostream>

using namespace std;

int main() {
  long n, sum;
  cin >> n;
  for (int i = 0; i <= n; i++)
    sum += i;
  sum = sum % 2;
  if (sum == 0) {
    cout << "YES";

  } else
    cout << "NO";
  return 0;
}
