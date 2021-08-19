#include <iostream>
using namespace std;

void pallindrome(int arr[], int n) {
  int num, rev, digit, flag = 0;
  for (int i = 0; i < n; i++) {
    rev = 0;
    num = arr[i];
    do {
      digit = num % 10;
      rev = (rev * 10) + digit;
      num = num / 10;
    } while (num != 0);

    if (arr[i] == rev)
      flag++;
    if (flag == n)
      cout << "Yes";
    else
      cout << "NO";
  }
}

int main() {
  int arr[1000], n, i, k;
  cin >> n;
  for (i = 0; i < n; i++)
    cin >> arr[i];
  pallindrome(arr, n);
  return 0;
}
