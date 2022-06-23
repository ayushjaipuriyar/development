#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> x;
    int arr[x];
    for (int j = 0; j < x; j++)
      cin >> arr[j];
    sort(arr,arr+x);
    for (int j = 1; j < x-1; j++)
      if ( arr[j] != j){
        cout << j+1 << " " << j << endl;
      }
  }
  return 0;
}
