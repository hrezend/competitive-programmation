//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <bits/stdc++.h>
using namespace std;

int main(){
	int horaI, horaF;
	cin >> horaI >> horaF;

	if(horaI == horaF){
		cout << "O JOGO DUROU 24 HORA(S)" << endl;	
	}
	if(horaF > horaI){
		cout << "O JOGO DUROU " << horaF-horaI << " HORA(S)" << endl;
	}
	if(horaF < horaI){
		cout << "O JOGO DUROU " << (24-horaI)+horaF << " HORA(S)" << endl;
	}
}
