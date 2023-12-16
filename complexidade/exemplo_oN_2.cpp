#include <iostream>
using namespace std;

int main() {
  int tamanho; // 1
  cin >> tamanho; // 1
  int arr[tamanho+10]; // 1

  int v; // 1
  cin >> v; // 1
  bool achamos = false; // 1
  for(int i = 1; i <= tamanho; i++) { // 1, 2, 3, ..., tamanho-1, tamanho
    cin >> arr[i]; // 1
    if(arr[i] == v) { // 1
      achamos = true; // 1
      break; // 1
    }
  }

  if(achamos) { // 1
    cout << "achamos\n"; // 1
  } else { // 1
    cout<< "nao achamos\n"; // 1
  }
}

// O (tamanho + tamanho) = O (tamanho)
// O (A + B + C) = O(A)
// O (A * B * C)

