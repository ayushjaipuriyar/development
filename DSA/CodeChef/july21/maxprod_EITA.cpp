#include<bits/stdc++.h>

using namespace std;

int main(){
  int n,ans;
  cin >> n;
  int arr[n][4];
  for (int i =0;i<n;i++){
    for (int j =0;j<4;j++)
      cin>>arr[i][j];
  }

  for (int i =0;i<n;i++){
      int ans1 = arr[i][1]*7;
      int left = (7 - arr[i][0]) * arr[i][3];
      int extra = (arr[i][0] * arr[i][2]);
      int ans2 = extra + left;
      ans = max(ans1,ans2);
      cout << endl << ans;
  }


      return 0;
}
