#include <iostream>

using namespace std;

int main() {
  int numLinhas, numColunas, count = 0;
  cin >> numLinhas >> numColunas;
  int soldados[numLinhas][numColunas];

  for (int i = 0; i < numLinhas; i++) {
    for (int j = 0; j < numColunas; j++) {
      cin >> soldados[i][j];
    }
  }

  for (int i = 0; i < numColunas; i++) {
    for (int j = 0; j < (numLinhas - 1); j++) {
      if (soldados[j][i] > soldados[j + 1][i]) {
        count++;
      }
    }
  }

  cout << count;
}