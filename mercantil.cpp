#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int vp, c1, c2, aux1, aux2;

  cin >> vp;
  cin >> c1;
  cin >> c2;

  aux1 = vp - c1;
  aux1 = abs(aux1);
  aux2 = vp - c2;
  aux2 = abs(aux2);

  if (aux1 < aux2) {
    cout << "primeiro";
  } else if (aux1 == aux2) {
    cout << "empate";
  } else
    cout << "segundo";
}