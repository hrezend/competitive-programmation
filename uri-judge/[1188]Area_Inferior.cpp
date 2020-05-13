//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
	double Matriz[12][12];
	
	char C;
	cin >> C;
	double Somatorio = 0;
	int Contador = 0;
	int Inicio = 5;
	int Fim = 6;

	for(int i = 0; i < 12; i++){
		for(int j = 0; j < 12; j++){
			cin >> Matriz[i][j];
		}
	}

	if(C == 'S'){
		for(int i = 7; i <= 11; i++){
			for(int j = Inicio; j <= Fim ; j++){
				Somatorio += Matriz[i][j];
			}
			Inicio--;
			Fim++;
		}
		cout << fixed << setprecision(1) << Somatorio << endl;
	}
	else if(C == 'M'){
		for(int i = 0; i <= 4; i++){
			for(int j = Inicio; j <= Fim ; j++){
				Somatorio += Matriz[i][j];
				Contador++;
			}
			Inicio--;
			Fim++;
		}
		cout << fixed << setprecision(1) << Somatorio/Contador << endl;
	}




}
