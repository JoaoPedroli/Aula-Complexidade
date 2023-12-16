#include <iostream>
using namespace std;

int main() {
  int numero;
  cin >> numero;
  for(int i = 1; i <= numero; i *= 2) { // O(log N)
    cout << i << '\n';
  }
  
}

/*
caso numero = 10:
1ª iteração: i = 1
2ª iteração: i = 2
3ª iteração: i = 4
4ª iteração: i = 8
5ª iteração: i = 16,  paramos aqui

o que aconteceu na prática = 1 * 2 * 2 * 2 * 2 = 2^4

-

a cada iteração, 'i' dobra de tamanho,
logo, temos um crescimento exponencial
*/
