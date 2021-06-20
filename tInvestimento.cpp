#include <iostream>

using namespace  std;

struct Investimento{

double MI;
double TJ;
int PI;
double JS;

void MFS (double MI, double TJ, int PI){
  
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
 
 
/*void CAM (){

  double TJM = JS/(MI * (PI*12));

  cout << "conversão da taxa de juros de ao ano para ao mês é " << TJM;
}*/

};

