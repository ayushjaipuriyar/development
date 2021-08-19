#include <iostream>
#define R 3
#define C 4
using namespace std;

int searchmat(int matrix[R][C], int n) {
  int i;
  if (n >= matrix[0][0] && n < matrix[0][1])
    for (i = 0; i < C; i++)
      if (matrix[i][0] == n)
        return 1;

  if (n >= matrix[0][1] && n < matrix[0][2])
    for (i = 0; i < C; i++)
      if (matrix[i][1] == n)
        return 1;
  if (n >= matrix[0][2] && n < matrix[R][C])
    for (i = 0; i < C; i++)
      if (matrix[i][2] == n)
        return 1;

  return 0;
}

int main() {
  int matrix[R][C] = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
  int target = 3;
  int n = searchmat(matrix, target);
  if (n == 1)
    cout << "Found the element";
  else
    cout << "The element doesnt exist";
}
