#include <bits/stdc++.h>

using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    float r = 0.143*n;
    r = pow(r,n);
    r - floor(r) < 0.5 ? cout << floor(r) << endl : cout << floor(r) + 1 << endl;
  }
}
