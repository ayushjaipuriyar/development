int RecursivePower(int n, int p) {
  // Your code here
  if (p == 0)
    return 1;
  else if (p == 1)
    return n;
  else
    return n * RecursivePower(n, p - 1);
}
