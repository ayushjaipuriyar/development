#include <cstring>
#include <iostream>
using namespace std;
int main() {

  char str[1000];
  gets(str);
  int n = strlen(str);
  int left = 0, right = n - 1;
  while (left < right) {
    char temp = str[left];
    str[left++] = str[right];
    str[right--] = temp;
  }
  cout << str;
  return 0;
}
