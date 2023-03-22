#include <iostream>

bool primo(int n) {
  for (int i = 2; i < n; i++) {
    if (n % i == 0 && n != 2) {
      return false;
    }
  }
  return true;
}

int main() {
  int a, b, i;
  std::cin >> a;
  std::cin >> b;

  for (i = a; i <= b; i++) {
    if (primo(i)) {
      std::cout << i << std::endl;
    }
  }
}