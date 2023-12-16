#include <iostream>
using namespace std;

int main() {
  long long num_bac_max;
  cin >> num_bac_max;
  for(long long num_bac = 1; num_bac <= num_bac_max; num_bac *= 2) { // log(log N)
    cout << num_bac << '\n';
  }
}

/*
caso numero = 10:
1ª iteração: i = 1  // 2^0 = 1
2ª iteração: i = 2  // 2^(dia-1) = numero de bactérias no dia tal
3ª iteração: i = 4
4ª iteração: i = 8
5ª iteração: i = 16,  paramos aqui

o que aconteceu na prática = 1 * 2 * 2 * 2 * 2 = 2^4

-

a cada iteração, 'i' dobra de tamanho,
logo, temos um crescimento exponencial
*/
