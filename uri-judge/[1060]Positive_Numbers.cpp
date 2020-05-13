//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <iostream>
using namespace std;

int main(){

	double valor;
	int aux = 0;
	
	for(int i=0; i<6; i++){
	   cin >> valor;
	   if(valor > 0){
	   	aux++;
	   }	
	}
	cout << aux << " valores positivos" << endl;
}
