#include <iostream>

int main() {
  int arr[3] = {1, 2, 3};
  int(&ref)[3] = arr;

  ref[0] = 6;
  ref[1] = 3;
  ref[2] = 0;

  std::cout << arr[0] << arr[1] << arr[2] << std::endl;
  return 0;

}