#include <iostream>

using namespace std;


int main () {
  float distancia, preco, litros, total;
  cin >> distancia >> preco;
  litros  = (distancia / 12);
  total = litros * preco;
  cout << " LITROS " << litros << " TOTAL PRECO GASTO " << total << endl;
  return 0;
}