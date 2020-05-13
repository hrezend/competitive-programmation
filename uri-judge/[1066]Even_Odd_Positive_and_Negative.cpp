//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <iostream>
using namespace std;

int main(){

	int valor, contador1 = 0, contador2 = 0, contador3 = 0, contador4 = 0;
	for (int i=0; i<5; i++){
		cin >> valor;
		if(valor % 2 == 0){
			contador1++;	
		}
		else if(valor % 2 != 0){
			contador2++;
		}
		if(valor > 0){
			contador3++;
		}
		else if(valor < 0){
			contador4++;
		}
	}
	cout << contador1 <<" valor(es) par(es)" << endl;
	cout << contador2 <<" valor(es) impar(es)" << endl;
	cout << contador3 <<" valor(es) positivo(s)" << endl;
	cout << contador4 <<" valor(es) negativo(s)" << endl;

return 0;
}
