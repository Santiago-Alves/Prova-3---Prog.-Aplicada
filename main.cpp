#include <iostream>
#include "tInvestimento.cpp"

using namespace std;


int main() {
  Investimento investimento;

  cout << "Digite o montante investido: ";
  cin >> investimento.MI;
  cout << "Digite a taxa de juros anual: ";
  cin >> investimento.TJ;
  cout << "Digite o periodo de investimento em anos: ";
  cin >>  investimento.PI;
  
  cout << endl;

  investimento.MFS(investimento.MI,investimento.TJ,investimento.PI);

  investimento.MFC(investimento.MI,investimento.TJ,investimento.PI);

  investimento.CAM();
}