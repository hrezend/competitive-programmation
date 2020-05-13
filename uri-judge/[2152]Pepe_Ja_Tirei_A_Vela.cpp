//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){

	desync;
	
	int Casos, Hora, Minuto, Porta;
	cin >> Casos;

	for(int i = 0; i < Casos; i++){
		cin >> Hora >> Minuto >> Porta;

		if(Porta == 0){
			if(Hora < 10 && Minuto > 9){
				cout << "0" << Hora << ":" << Minuto << " - A porta fechou!" << endl;
			}
			else if(Hora < 10 && Minuto < 10){
				cout << "0" << Hora << ":" << "0" << Minuto << " - A porta fechou!" << endl;
			}
			else if(Hora > 9 && Minuto < 10){
				cout << Hora << ":" << "0" << Minuto << " - A porta fechou!" << endl;
			}
			else if(Hora > 9 && Minuto > 9){
				cout << Hora << ":" << Minuto << " - A porta fechou!" << endl;
			}
		}
		else if(Porta == 1){
			if(Hora < 10 && Minuto > 9){
				cout << "0" << Hora << ":" << Minuto << " - A porta abriu!" << endl;
			}
			else if(Hora < 10 && Minuto < 10){
				cout << "0" << Hora << ":" << "0" << Minuto << " - A porta abriu!" << endl;
			}
			else if(Hora > 9 && Minuto < 10){
				cout << Hora << ":" << "0" << Minuto << " - A porta abriu!" << endl;
			}
			else if(Hora > 9 && Minuto > 9){
				cout << Hora << ":" << Minuto << " - A porta abriu!" << endl;
			}
		}		
	}

}
