#include <bits/stdc++.h>
using namespace std;

// Function to reverse the array
void rev_array(int arr[], int start, int end) {
  while (start < end) {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}

// recursive fucntion for reversing the array
void reverse_Array(int arr[], int start, int end) {
  if (start >= end) {
    return;
  } else {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    reverse_Array(arr, start + 1, end - 1);
  }
}

// Function to print the array
void display(int arr[], int l) {
  for (int i = 0; i < l; i++)
    cout << arr[i] << "\t";
  cout << endl;
}
int main() {
  int arr[] = {1, 2, 3, 4, 5, 6};
  int arr_length = sizeof(arr) / sizeof(arr[0]);
  display(arr, arr_length);
  reverse_Array(arr, 0, (arr_length - 1));
  display(arr, arr_length);
  rev_array(arr, 0, (arr_length - 1));
  display(arr, arr_length);
  return 0;
}
