#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

bool simpleChecker(string str1, string str2)
{
  int count = 0;
  if (str1.length() == str2.length()){
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    if (str1.compare(str2) == 0)
      count = 0;
        return count;
    

  }
}
