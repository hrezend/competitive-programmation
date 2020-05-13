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
	int Aux = 10;

	for(int i = 0; i < 12; i++){
		for(int j = 0; j < 12; j++){
			cin >> Matriz[i][j];
		}
	}

	if(C == 'S'){
		for(int i = 0; i <= 10; i++){
			for(int j = Aux; j >= 0 ; j--){
				Somatorio += Matriz[i][j];
			}
			Aux--;
		}
		cout << fixed << setprecision(1) << Somatorio << endl;
	}
	else if(C == 'M'){
		for(int i = 0; i <= 10; i++){
			for(int j = Aux; j >= 0 ; j--){
				Somatorio += Matriz[i][j];
				Contador++;
			}
			Aux--;
		}
		cout << fixed << setprecision(1) << Somatorio/Contador << endl;
	}




}
