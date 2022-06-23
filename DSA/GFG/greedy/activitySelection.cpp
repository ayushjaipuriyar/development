#include <bits/stdc++.h>
using namespace std;

int activitySelection(vector<int> start, vector<int> end, int n) {
  // Your code here
  vector<pair<int, int>> arr(n);

  for (int i = 0; i < n; i++)
    arr[i] = {start[i], end[i]};

  sort(arr.begin(), arr.end(),
       [](pair<int, int> a, pair<int, int> b) { return a.second < b.second; });

  int res = 1;
  pair<int, int> sol = arr[0];
  for (int i = 1; i < n; i++) {
    if (sol.second < arr[i].first) {
      res++;
      sol = arr[i];
    }
  }

  return res;
}

int main() {}
