//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <iostream>

using namespace std;

int main(){

	int segundos, horas, minutos;
	cin >> segundos;
			
	horas = segundos/3600;
	segundos = segundos - (horas*3600);

	minutos = segundos/60;
	segundos = segundos - (minutos*60);	
	
	cout << horas << ":" << minutos << ":" << segundos << endl;	

}

	




