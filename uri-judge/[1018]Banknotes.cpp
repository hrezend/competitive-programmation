//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <iostream>

using namespace std;

int main(){

	int quantia;
	cin >> quantia;
		
	int resto;
	cout << quantia << endl;	
	cout << quantia/100 << " nota(s) de R$ 100,00" << endl;
	resto = (quantia%100);

	cout << resto/50 << " nota(s) de R$ 50,00" << endl;
	resto = (resto%50);

	cout << resto/20 << " nota(s) de R$ 20,00" << endl;
	resto = (resto%20);

	cout << resto/10 << " nota(s) de R$ 10,00" << endl;
	resto = (resto%10);

	cout << resto/5 << " nota(s) de R$ 5,00" << endl;
	resto = (resto%5);

	cout << resto/2 << " nota(s) de R$ 2,00" << endl;
	resto = (resto%2);

	cout << resto/1 << " nota(s) de R$ 1,00" << endl;

}

	




