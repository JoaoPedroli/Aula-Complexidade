#include <iostream>
using namespace std;

int main() {
  for(int i = 1; i <= 1000000; i++) { // O(1). Crescimento é 0, ou seja, valor constante
    cout << i << '\n';
  }
}
