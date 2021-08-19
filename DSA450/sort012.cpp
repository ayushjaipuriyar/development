#include <iostream>

using namespace std;

void sort_012(int arr[], int n) {
  int i, flag_0 = 0, flag_1 = 0, flag_2 = 0;
  for (i = 0; i < n; i++) {
    switch (arr[i]) {
    case 0:
      flag_0++;
      break;
    case 1:
      flag_1++;
      break;
    case 2:
      flag_2++;
      break;
    }
  }
  cout << flag_0 << endl;
  cout << flag_1 << endl;
  cout << flag_2 << endl;
  for (i = 0; i < flag_0; i++)
    arr[i] = 0;
  for (i = flag_0; i < (flag_0 + flag_1); i++)
    arr[i] = 1;
  for (i = (flag_0 + flag_1); i < (flag_0 + flag_1 + flag_2); i++)
    arr[i] = 2;
}

int main() {
  int arr[1000], n;
  cout << "ENter the number of elements : ";
  cin >> n;
  cout << "PLease enter the elements of the array : ";
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  sort_012(arr, n);
  for (int i = 0; i < n; i++)
    cout << "\t" << arr[i];
  return 0;
}
