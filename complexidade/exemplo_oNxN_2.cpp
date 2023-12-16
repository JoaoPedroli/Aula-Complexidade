#include <iostream>
using namespace std;

int main() {
  int num1, num2;
  cin >> num1 >> num2;
  for(int i = 1; i <= num1; i++) { // O(N)
    for(int j = 1; j <= num2; j++) { // O(N)
      cout << i << ' ' << j << '\n';
    }
  }

  int num3;
  cin >> num3;
  for(int i = 1; i <= num3; i++) { // O(N)
    cout << i << '\n';
  }
}
