//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <iostream>
using namespace std;

int main(){
	int valor, contador = 0;
	for (int i=0; i<5; i++){
		cin >> valor;
		if(valor % 2 == 0){
			contador++;	
		}
	}
	cout << contador <<" valores pares" << endl;
}
