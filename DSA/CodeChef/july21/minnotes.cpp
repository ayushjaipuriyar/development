#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int findGCD(int arr[], int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
    {
        result = gcd(arr[i], result);
 
        if(result == 1)
        {
           return 1;
        }
    }
    return result;
}

int main()
{
  ll i, j, t, x;
  cin >> t;
  x = t;
  ll arr[t];
  while (t--) {
    int n;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
      cin >> a[i];
    int c = findGCD(a, n);
    sort(a, a + n);
    a[n - 1] = c;
    int ans = 0;
    for (int m = 0; m < n;m++)
      ans += a[m] / i;
    arr[t] = ans;
  }
    for (i = x - 1; i >= 0; i++)
    cout << arr[i];
    return 0;
}
