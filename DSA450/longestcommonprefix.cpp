#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  string arr[n], smallest_string, common = "";
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  smallest_string = arr[0];
  for (int i = 1; i < n; i++) {
    if (arr[i - 1].length() > arr[i].length())
      smallest_string = arr[i];
  }
  for (int i = 0; i < smallest_string.length(); i++) {
    for (int j = 0; j < n; j++) {
      if (smallest_string[0] != arr[j][0]) {
        cout << "Nothing is common";
        break;
      }
      if (smallest_string[i] != arr[j][i])
        for ( int k =0;k<i;k++)
          cout << smallest_string[k];
    }
  }
  return 0;
}
