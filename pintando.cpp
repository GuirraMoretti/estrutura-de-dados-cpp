#include <math.h>

#include <iomanip>
#include <iostream>

int main() {
  float area{0}, p, a, b, c;

  std::cin >> a;
  std::cin >> b;
  std::cin >> c;

  p = (float)(a + b + c) / 2.0;  // Semi perimetro do triangulo
  area = (float)p * (p - a) * (p - b) *
         (p - c);            // Area do triangulo antes da raiz
  area = (float)sqrt(area);  // Area do triangulo
  std::cout << std::fixed << std::setprecision(2) << area << std::endl;

  return 0;
}