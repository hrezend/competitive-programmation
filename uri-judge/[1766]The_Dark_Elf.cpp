//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

struct Rena{
	string Nome;
	int Idade;
	int Peso;
	double Altura;
};

bool cmpRena(Rena a, Rena b){
	return(a.Peso > b.Peso || a.Peso == b.Peso && a.Idade < b.Idade || a.Peso == b.Peso && a.Idade == b.Idade && a.Altura < b.Altura || a.Peso == b.Peso && a.Idade == b.Idade && a.Altura == b.Altura && a.Nome < b.Nome);
}

int main(){
	int T;
	cin >> T;
	int N, M;
	vector <Rena> renas;
	Rena input;

	for(int i = 0; i < T; i++){
		cin >> N >> M;

		for(int p = 0; p < N; p++){
			cin >> input.Nome >> input.Peso >> input.Idade >> input.Altura;
			renas.push_back(input);
		}
		
		sort(renas.begin(), renas.end(), cmpRena);		

		cout << "CENARIO {" << i+1 << "}" << endl;
		for(int k = 0; k < M; k++){
			cout << k+1 << " - " << renas[k].Nome << endl;
		}
		renas.clear();
	}



}
