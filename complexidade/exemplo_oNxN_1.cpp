#include <iostream>
using namespace std;

int main() {
  int num1, num2;
  cin >> num1 >> num2;
  for(int i = 1; i <= num1; i++) { // num1 passos
    for(int j = 1; j <= num2; j++) { // num2 passos
      cout << i << ' ' << j << '\n'; // 1
    }
  }
}

// O (num1 * num2) = O(N^2)
// num1 = 100 passos
// num2 = 100 passos
// 10.000 passos
// num1 <= 1.000
// num2 <= 1.000
// num1 * num2 = 10^6
// num1 <= 10.000
// num2 <= 100.000
// num1 * num2 = 10^9
