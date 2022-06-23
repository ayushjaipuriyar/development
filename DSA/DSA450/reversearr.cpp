#include <iostream>
#define SIZE 1000

using namespace std;

void push(int arr[], int size) {
  int i;
  for (i = 0; i < size; i++)
    cin >> arr[i];
}
void reverse(int arr[], int size) {
  int temp, start, end;
  start = 0;
  end = size - 1;
  while (start < end) {
    temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}
void display(int arr[], int size) {
  int i;
  for (i = 0; i < size; i++)
    cout << arr[i] << "\t";
}

int main() {
  int arr[SIZE], arr_size;
  cout << "Enter the total numbers to be entered : ";
  cin >> arr_size;
  cout << "Enter " << arr_size << " number : ";
  push(arr, arr_size);
  cout << "\nThe entered array is : ";
  display(arr, arr_size);
  reverse(arr, arr_size);
  cout << "\nThe reverse array is : ";
  display(arr, arr_size);
  return 0;
}
