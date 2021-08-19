#include <iostream>

using namespace std;

int maxSubArraySum(int arr[], int size) {
  int max_so_far = 0, max_ending_here = 0, flag = 1;
  for (int i = 0; i < size; i++) {
    max_ending_here = max_ending_here + arr[i];
    if (max_so_far < max_ending_here) {
      max_so_far = max_ending_here;
    }
    if (max_ending_here < 0)
      max_ending_here = 0;
  }
  return max_so_far;
}

int main() {
  int arr[1000], n, i;
  cin >> n;
  for (i = 0; i < n; i++)
    cin >> arr[i];
  int max_sum = maxSubArraySum(arr, n);
  cout << "Maximum contiguous sum is " << max_sum;
  return 0;
}
