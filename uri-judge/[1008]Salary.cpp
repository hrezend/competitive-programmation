//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

	int NUMERO;
	int HORAS;
	double VALOR_HORA;

	cin >> NUMERO; 
	cin >> HORAS;
	cin >> VALOR_HORA;
	
	double SALARIO = HORAS*VALOR_HORA;

	cout << "NUMBER = " << NUMERO << endl;
	cout << fixed << setprecision(2) << "SALARY = U$ " << SALARIO << endl;
}
