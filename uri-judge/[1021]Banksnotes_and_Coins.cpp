//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

	double entrada;
	cin >> entrada;
	int notas = entrada;
	int decimal = ((entrada - notas)*100.0);

	int resto;

	cout << "NOTAS:" << endl;
	cout << notas/100 << " nota(s) de R$ 100.00" << endl;
	resto = (notas%100);

	cout << resto/50 << " nota(s) de R$ 50.00" << endl;
	resto = (resto%50);

	cout << resto/20 << " nota(s) de R$ 20.00" << endl;
	resto = (resto%20);

	cout << resto/10 << " nota(s) de R$ 10.00" << endl;
	resto = (resto%10);

	cout << resto/5 << " nota(s) de R$ 5.00" << endl;
	resto = (resto%5);

	cout << resto/2 << " nota(s) de R$ 2.00" << endl;
	resto = (resto%2);

	int resto2 = decimal;

	cout << "MOEDAS:" << endl;
	cout << resto << " moeda(s) de R$ 1.00" << endl;
	resto2 = (resto2%100);

	cout << resto2/50 << " moeda(s) de R$ 0.50" << endl;
	resto2 = (resto2%50);

	cout << resto2/25 << " moeda(s) de R$ 0.25" << endl;
	resto2 = (resto2%25);

	cout << resto2/10 << " moeda(s) de R$ 0.10" << endl;
	resto2 = (resto2%10);

	cout << resto2/5 << " moeda(s) de R$ 0.05" << endl;
	resto2 = (resto2%5);

	cout << resto2 << " moeda(s) de R$ 0.01" << endl;
}

	




