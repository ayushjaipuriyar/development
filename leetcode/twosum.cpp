#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
  int target;
  int n, a;
  cin >> n;
  vector<int> nums(n);

  for (int i; i < n; i++) {
    cin >> a;
    nums.push_back(a);
  }
  for (int i = 0; i < n; i++) {

    for (int j = 1; i < n - 1; j++) {
      if (nums.at(i) + nums.at(j) == target)
        cout << i << j;
    }
  }
}
