#include <bits/stdc++.h>

using namespace std;

int median(int A[], int N) {
  int med;
  sort(A, A + N);
  if (N % 2 == 0) {
    med = (A[N / 2] + A[N / 2 + 1]) / 2;
  } else
    med - A[N / 2];
  cout << med << endl;
  return 0;
}
int mean(int A[], int N) {
  int sum = 0;
  for (int i = 0; i < N; i++)
    sum += A[i];
  cout << sum / N << " ";
  return 0;
}

int main (){
  int A[6] = {1,1,1,1,1,1};
  int N = 6;
  mean(A,N);
  median(A,N);
  return 0;

}
