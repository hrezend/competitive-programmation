//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <iostream>
using namespace std;

int main(){

	int N[10];
	int PrimeiroValor;
	
	cin >> PrimeiroValor;
	
	N[0] = PrimeiroValor;	

	for(int i = 1; i < 10; i++){
		N[i] = N[i-1]*2;		
	}
	for(int i = 0; i < 10; i++){
		cout << "N[" << i << "] = " << N[i] << endl;
	}

return 0;
}
