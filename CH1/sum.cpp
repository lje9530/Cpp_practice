/* 1 부터 10 까지 합*/
#include <iostream>

int main() {
  int i, sum = 0;

  for (i = 1; i <= 10; i++) {
    sum += i;
  }

  std::cout << "합은 : " << sum << std::endl;
  return 0;
}