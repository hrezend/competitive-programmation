//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <bits/stdc++.h>
using namespace std;

int main(){

	int golsGremio, golsInter, scoreGremio=0, scoreInter=0, empates=0, jogos=0;
	int condicao = 1;

	while(condicao == 1){
		cin >> golsInter >> golsGremio;
		if(golsInter == golsGremio){
			empates++;
		}
		else if(golsInter > golsGremio){
			scoreInter++;
		}
		else if(golsInter < golsGremio){
			scoreGremio++;
		}
	
		cout << "Novo grenal (1-sim 2-nao)" << endl;
		cin >> condicao;

		jogos++;
	}

		cout << jogos << " grenais" << endl;
		cout << "Inter:" << scoreInter << endl;
		cout << "Gremio:" << scoreGremio << endl;
		cout << "Empates:" << empates << endl;

		if(scoreInter > scoreGremio){
			cout << "Inter venceu mais" << endl;		
		}
		else{
			cout << "Gremio venceu mais" << endl;
		}
}
