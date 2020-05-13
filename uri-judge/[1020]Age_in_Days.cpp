//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <iostream>

using namespace std;

int main(){

	int dias, meses, anos;
	cin >> dias;
			
	anos = dias/365;
	dias = dias - (anos*365);

	meses = dias/30;
	dias = dias - (meses*30);	
	
	cout << anos << " ano(s)" << endl;
	cout << meses << " mes(es)" << endl;	
	cout << dias << " dia(s)" << endl;	

}

