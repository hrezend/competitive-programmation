//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

	int CodA, QtdA, CodB, QtdB;
	double PreA, PreB;
	cin >> CodA >> QtdA >> PreA;
	cin >> CodB >> QtdB >> PreB;
	
	double Valor = (QtdA*PreA)+(QtdB*PreB);

	cout << fixed << setprecision(2) << "VALOR A PAGAR: R$ " << Valor << endl;
}
