#include <iostream>
using namespace std;

int main() {
  int numero1;
  cin >> numero1;
  for(int i = 1; i <= numero1; i++) { // 1, 2, 3, ..., numero-1, numero
    cout << i << '\n';
  }

  int numero2;
  cin >> numero2;
  for(int i = 1; i <= numero2; i++) { // 1, 2, 3, ..., numero-1, numero
    cout << i << '\n';
  }
}

// O (numero1 + numero2) = O(N)
// numero1 = 1.000.000
// numero2 = 1.000.000
// numero1 + numero2 = 2.000.000
