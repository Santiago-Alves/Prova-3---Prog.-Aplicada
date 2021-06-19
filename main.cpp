#include <iostream>
#include "tInvestimento.cpp"

using namespace std;


int main() {
  Investimento investimento;

  cout << "Digite o montante investido: ";
  cin >> investimento.MontanteInvestido;
  cout << "Digite a taxa de juros anual: ";
  cin >> investimento.TaxaJuros;
  cout << "Digite o periodo de investimento em anos: ";
  cin >>  investimento.PeriodoInvestimento;
  
  
}