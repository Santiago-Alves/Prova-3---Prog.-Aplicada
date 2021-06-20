#include <iostream>
#include "tInvestimento.cpp"

using namespace std;


int main() {
  tInvestimento investimento; //declarando objeto

  int opcao = 5;

  while(opcao != 0){
  
    cout <<"**************************" << endl;
    cout <<"* Escolha uma das opção: *" << endl;
    cout <<"* 1 - Montante simples.  *" << endl;
    cout <<"* 2 - Montante composto. *" << endl;
    cout <<"* 3 - Conversao.         *" << endl;
    cout <<"* 0 - Sair.              *" << endl;
    cout <<"**************************" << endl;

    cin >> opcao;

    cout << endl;

  
    
    if (opcao == 1){
      cout <<"**********************************" << endl;
      cout <<"* Informe o montante investido:  *" << endl;
      cout <<"**********************************" << endl;
      cin >> investimento.MI;

      cout << endl;

      cout <<"***********************************" << endl;
      cout <<"* Informe a taxa de juros anual:  *" << endl;
      cout <<"***********************************" << endl;
      cin >> investimento.TJ;

      cout << endl;

      cout <<"**********************************************" << endl;
      cout <<"* Informe o periodo de investimento em anos: *" << endl;
      cout <<"**********************************************" << endl;
      cin >>  investimento.PI;

      investimento.MFS(investimento.MI,investimento.TJ,investimento.PI);
      cout << endl;
  
    }

    if (opcao == 2){
      cout <<"**********************************" << endl;
      cout <<"* Informe o montante investido:  *" << endl;
      cout <<"**********************************" << endl;
      cin >> investimento.MI;

      cout << endl;

      cout <<"***********************************" << endl;
      cout <<"* Informe a taxa de juros anual:  *" << endl;
      cout <<"***********************************" << endl;
      cin >> investimento.TJ;

      cout << endl;

      cout <<"**********************************************" << endl;
      cout <<"* Informe o periodo de investimento em anos: *" << endl;
      cout <<"**********************************************" << endl;
      cin >>  investimento.PI;

       investimento.MFC(investimento.MI,investimento.TJ,investimento.PI);
      
      cout << endl;

    }

    if (opcao == 3){
      cout <<"**********************************************************" << endl;
      cout <<"* Deseja converter a taxa de juros simples ou composto?  *" << endl;
      cout <<"**********************************************************" << endl << endl;

      cout <<"*******************************" << endl;
      cout <<"* Opções:                     *" << endl;
      cout <<"* 1 - Taxa de juros simples.  *" << endl;
      cout <<"* 2 - Taxa de juros composto. *" << endl;
      cout <<"*******************************" << endl;
      cin >> opcao;
      if((opcao ==1) || (opcao == 2)){
      cout <<"***********************************" << endl;
      cout <<"* Informe a taxa de juros anual:  *" << endl;
      cout <<"***********************************" << endl;

      cin >> investimento.TJ;
      investimento.CAM(opcao);
      }else{
        cout << "Opção invalida" << endl << endl;
      }
    }

  }
  
}