#include <iostream>
#include <iomanip>

using namespace std;

    int main (void)
    {
      float ht,vh,pd,td,sb,sl;

      cout << setprecision(2) << fixed;

      cout << "entre com o numero de horas trabalhadas:" ;
      cin >> ht;
      cin.ignore (80,'\n');

      cout << "entre com valor das horas de trabalho:";
      cin >> vh;
      cin.ignore (80,'\n');

      cout << "qual o percentual de desconto?" ;
      cin >> pd;
      cin.ignore (80,'\n');

      sb= ht*vh;
      td= (pd/100)*sb;
      sl= sb - td;

      cout << "\n";
      cout << "salario bruto" << right << setw(8)<< sb << endl;
      cout << "desconto :" << right << setw (8) << td << endl;
      cout << "salario liquido:" << right << setw (8) << sl << endl;

      cout << endl;
      cout << "tecle enter para encerrar";
      cin.get();
      return 0;


    }
