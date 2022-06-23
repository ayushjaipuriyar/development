#include <bits/stdc++.h>

using namespace std;
void maximumAdjacent(int sizeOfArray, int arr[]) {
  for (int i = 0; i < sizeOfArray - 1; i++) {
    cout << ((arr[i] > arr[i+1]) ? arr[i] : arr[i+1]) << " ";
  }
}
int main() { 
  int size = 6, arr[6] = {1,2,2,3,4,5};
  maximumAdjacent(size, arr);
  return 0;

}
