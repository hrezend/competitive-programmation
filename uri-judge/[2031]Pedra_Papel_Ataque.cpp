//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){

	desync;

	int N;
	string Jogada1, Jogada2;
	
	cin >> N;

	for(int i = 0; i < N; i++){
		cin >> Jogada1 >> Jogada2;

		if(Jogada1 == "ataque" && Jogada2 == "pedra"){
			cout << "Jogador 1 venceu" << endl;
		}
		else if(Jogada1 == "pedra" && Jogada2 == "ataque"){
			cout << "Jogador 2 venceu" << endl;
		}
		else if(Jogada1 == "pedra" && Jogada2 == "papel"){
			cout << "Jogador 1 venceu" << endl;
		}
		else if(Jogada1 == "papel" && Jogada2 == "pedra"){
			cout << "Jogador 2 venceu" << endl;
		}
		else if(Jogada1 == "papel" && Jogada2 == "ataque"){
			cout << "Jogador 2 venceu" << endl;
		}
		else if(Jogada1 == "ataque" && Jogada2 == "papel"){
			cout << "Jogador 1 venceu" << endl;
		}
		else if(Jogada1 == "papel" && Jogada2 == "papel"){
			cout << "Ambos venceram" << endl;
		}
		else if(Jogada1 == "ataque" && Jogada2 == "ataque"){
			cout << "Aniquilacao mutua" << endl;
		}
		else if(Jogada1 == "pedra" && Jogada2 == "pedra"){
			cout << "Sem ganhador" << endl;
		}
	}

}
