#include <math.h>

#include <iomanip>
#include <iostream>

double fatorial(int n) {
  if (n == 1 || n == 0) return 1;
  return n = n * fatorial(n - 1);
}

double euler(int n) {
  double e = 0;

  for (int i = 0; i <= n; i++) {
    e += +(1 / fatorial(i));
  }
  return e;
}

int main() {
  double n;
  std::cin >> n;
  std::cout << std::fixed << std::setprecision(6) << euler(n);
}