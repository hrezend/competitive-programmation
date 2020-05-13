//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
		
	double valor, valores = 0, media;
	int contador = 0;
	for (int i=0; i<6; i++){
		cin >> valor;
		if(valor >= 0){
			valores += valor; 
			contador++;	
		}
	}
	
	media = valores/contador;
	
	cout << contador <<" valores positivos" << endl;
	cout << fixed << setprecision(1) << media << endl;
}
