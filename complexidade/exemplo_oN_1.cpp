#include <iostream>
using namespace std;

int main() {
  int numero;
  cin >> numero; /// 1.000.000
  for(int i = 1; i <= numero; i++) { // 1, 2, 3, ..., numero-1, numero
    cout << i << '\n'; // 1
  }
}
