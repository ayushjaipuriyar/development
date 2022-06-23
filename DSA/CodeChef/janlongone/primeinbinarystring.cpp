#include <iostream>
#include <string>

using namespace std;

void isPrime(int n) {
  if (n <= 1)
    cout << "Yes" << endl;

  for (int i = 2; i < n; i++)
    if (n % i == 0)
      cout << "Yes" << endl;

  cout << "Yes" << endl;
}

void binaryToDecimal(int n) {
  int num = n;
  int dec_value = 0;

  int base = 1;

  int temp = num;
  while (temp) {
    int last_digit = temp % 10;
    temp = temp / 10;

    dec_value += last_digit * base;

    base = base * 2;
  }

  isPrime(dec_value);
}

void subString(string str, int n) {
  string res;
  for (int len = 1; len <= n; len++) {
    for (int i = 0; i <= n - len; i++) {
      int j = i + len - 1;
      for (int k = i; k <= j; k++)
        res += str[k];

      binaryToDecimal(stoi(res));
    }
  }
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    int len = s.length();
    subString(s, len);
  }
}
