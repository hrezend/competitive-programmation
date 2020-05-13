//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double salario;
	double reajuste;
	int percentual;

	cin >> salario;

	if(salario > 0 && salario <= 400.00){
		reajuste = salario*0.15;
		percentual = 15;
	}
	else if(salario > 400.00 && salario <= 800.00){
		reajuste = salario*0.12;
		percentual = 12;
	}
	else if(salario > 800.00 && salario <= 1200.00){
		reajuste = salario*0.10;
		percentual = 10;
	}
	else if(salario > 1200.00 && salario <= 2000.00){
		reajuste = salario*0.07;
		percentual = 7;
	}
	else if(salario > 2000.00){
		reajuste = salario*0.04;
		percentual = 4;
	}
	
	cout << fixed << setprecision(2) << "Novo salario: " << (salario+reajuste) << endl;
	cout << fixed << setprecision(2) << "Reajuste ganho: " << reajuste << endl;
	cout << "Em percentual: " << percentual << " %" << endl;
}
