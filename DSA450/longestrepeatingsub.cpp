#include <bits/stdc++.h>

using namespace std;

int longestStringSub(string str){
  int n = str.length();
  
  int table[n+1][n+1];
    for (int i = 0;i<=n;i++){
      for (int j = 0; j<=n; j++) 
        table[i][j] = 0;
    }

    for (int i = 1;i<=n;i++) 
    {
      for (int j = 1;j<=n;j++)
      {
        if (str[i-1]==str[j-1] && i != j)
          table[i][j] = 1 + table[i-1][j-1];
        else
          table[i][j] = max(table[i][j-1],table[i-1][j]);

      }
    }
    return table[n][n];

}

int main(){

  string str;
  cin >> str;
  cout << longestStringSub(str);
  return 0;
}
