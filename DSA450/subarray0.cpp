#include <iostream>

using namespace std;

void maxSubArraySum(int arr[], int size) {
  int max_so_far = 0, max_ending_here = 0;
  for (int i = 0; i < size; i++) {
    max_ending_here = max_ending_here + arr[i];
    if (max_so_far < max_ending_here)
      max_so_far = max_ending_here;
    if (max_ending_here < 0)
      max_ending_here = 0;
  }
  if (max_so_far == 0)
    cout << "YES";
  else
    cout << "NO";
}

int main() {
  int a[1000], n, i;
  cin >> n;
  for (i = 0; i < n; i++)
    cin >> a[i];
  maxSubArraySum(a, n);
  return 0;
}
