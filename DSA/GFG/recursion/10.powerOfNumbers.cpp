
long sum = 0;
long m = 1000000007;
long power(int N, int R) {
  if (N == 0) {
    return 0;
  }
  if (R == 1) {
    return N;
  }

  sum = power(N, R / 2);
  if (R % 2 == 0) {
    return sum % m * sum % m;
  }
  return N * sum % m * sum % m;
}
