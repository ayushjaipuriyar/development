#include <cstring>
#include <iostream>

using namespace std;
int main() {

  char str1[] = "sunday";
  char str2[] = "saturday";
  int res = strcmp(str1, str2);
  if (res == 0)
    cout << "Strings are same hence no operations are required";
  else
    cout << "Strings are not the same\t" << res;
  return 0;
}
