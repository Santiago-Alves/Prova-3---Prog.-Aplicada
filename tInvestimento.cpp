#include <iostream>
#include <cmath>
using namespace  std;

struct tInvestimento{

double MI;
double TJ;
int PI;


void MFS (double MI, double TJ, int PI){
  double JS;
  JS = MI * TJ/100 * PI;
  double MS = MI + JS;

  cout << "Montante final simples é: " << MS << endl;
}

void MFC (double MI, double TJ, int PI){
  double JC = 1;

  for(int i = 0; i < PI;i++){
    JC = JC * (1+ TJ/100); 
  }
   double MC = MI * JC;
  cout << "Montante final composto é: " << MC << endl;
}
 
 
void CAM (int op){

  if(op == 1){
    double ConversaoS = TJ/12.0;
    cout.precision(2);
    cout << fixed;
    cout << "Convertendo taxa de juros anual simples para mensal: " << ConversaoS << endl << endl;

  }else{

  double ConversaoC = (pow(1 + TJ/100, 1.0/12.0) - 1) * 100; 
  cout.precision(2);
  cout << fixed;
  cout << "Convertendo taxa de juros anual composto para mensal: " << ConversaoC  << endl << endl;
}
}



};


