#include <iostream>

using namespace std;

int main() {
  float horas, salario, valorHora, valorHoraExtra, salarioMinimo, horasExtras;

  cin >> horas >> salarioMinimo >> horasExtras;

  valorHora = salarioMinimo/8;
  valorHoraExtra = salarioMinimo/4;

  salario = (horas * valorHora) + (horasExtras * valorHoraExtra);
  cout << "SEU SALARIO E ESSA MICHARIA R$ " << salario << endl;

  return 0; 
} 