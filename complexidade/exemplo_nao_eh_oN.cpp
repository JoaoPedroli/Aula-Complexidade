#include <iostream>
using namespace std;

int main() {
  int numero = 100;
  for(int i = 1; i <= numero; i++) { // O(1). Crescimento é 0, ou seja, valor constante
    cout << i << '\n';
  }
}
