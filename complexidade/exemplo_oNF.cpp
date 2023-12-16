#include <iostream>
using namespace std;

void func(int n) {
  if(n == 0) return;
  for(int i = 1; i <= n; i++) {
    func(n-1);
  }
}

int main() {
  int numero;
  cin >> numero;
  func(numero);
  cout << "nao crachei B-)";
}

/*
a cada chamada da função faremos um for que irá de 1..N
e a cada iteração desse for chamaremos func(n-1), o que quer dizer que...
a cada iteração teremos outro 'for' "dentro" desse 'for' original, que vai de 1..N-1
ao final, teremos esse número de passos:
N * (N - 1) * (N - 2) * .... * 2 * 1,
que é igual a N!
*/
