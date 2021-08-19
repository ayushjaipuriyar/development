#include <cstring>
#include <iostream>

using namespace std;

int main() {
  int i = 0, str_len, flag;
  char string_input[1000];
  gets(string_input);
  str_len = strlen(string_input);
  while (string_input[i] != '\0') {
    for (int j = 0; j < str_len / 2; j++)
      if (string_input[j] == string_input[str_len - j])
        flag = 1;
    i++;
  }
  if (flag == 1)
    cout << "YES";
}
