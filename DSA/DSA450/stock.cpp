#include <iostream>

using namespace std;

int maxSubArraySum(int arr[]) {
  int max_so_far = 0, flag;
  for (int i = 1; i < 7; i++) {
    if (max_so_far < arr[i]) {
      max_so_far = arr[i];

      flag = i + 1;
    }
  }
  cout << "Sell on " << flag << "\t";
  return max_so_far;
}

int minSubArraySum(int arr[]) {

  int min_so_far = arr[0], flag;
  for (int i = 0; i < 7; i++) {
    if (min_so_far > arr[i]) {
      min_so_far = arr[i];
      flag = i + 1;
    }
  }
  cout << "Buy on " << flag << "\t";
  return min_so_far;
}

int main() {
  int a[7];
  for (int i = 0; i < 7; i++)
    cin >> a[i];
  int max_sum = maxSubArraySum(a);
  cout << "Price is " << max_sum << endl;
  int min_sum = minSubArraySum(a);
  cout << "Price is " << min_sum;
  return 0;
}
