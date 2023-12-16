#include <iostream>
using namespace std;

int main() {
  int num1, num2;
  cin >> num1 >> num2;
  // O(N * N) = O(N^2)
  for(int i = 1; i <= num1; i++) { // O(N)
    for(int j = 1; j <= num2; j++) { // O(N)
      cout << i << ' ' << j << '\n';
    }
  }

  int num3;
  cin >> num3;
  // O(N)
  for(int i = 1; i <= num3; i++) { // O(N)
    cout << i << '\n';
  }
}

// O(N^2 + N)

/// num1 = 10
/// num2 = 1.000
/// num3 = 1.000
/// (num1 * num2) + num3
/// (10000) + 1.000 = 11.000
