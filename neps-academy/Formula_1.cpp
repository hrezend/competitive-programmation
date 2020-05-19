//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

struct Piloto{
	int Id;
	int Pontos;
	int Posicao;
};

bool order(Piloto a, Piloto b){
	return(a.Pontos > b.Pontos || a.Pontos == b.Pontos && a.Id > b.Id);
}

int main(){
	desync;

	vector <Piloto> Pil;
	Piloto Input;
	int G, P;
	cin >> G >> P;
	
	while(G != 0 && P != 0){
		int OrdemChegada[G][P];

		for(int i = 1; i <= P; i++){
			Input.Id = i;
			Input.Pontos = 0;
			Input.Posicao = 0;
			Pil.push_back(Input);
		}

		for(int i = 0; i < G; i++){
			for(int j = 0; j < P; j++){
				cin >> OrdemChegada[i][j];
			}
		}

		int S;
		cin >> S;

		for(int i = 0; i < S; i++){
			int K, Pontos;
			cin >> K;
			int Aux = 0;
			vector <int> Winners;

			for(int x = 0; x < P; x++){
				for(int z = 0; z < P; z++){
					if(OrdemChegada[Aux][z] == Pil[x].Id){
						Pil[x].Posicao = z+1;
					}
				}
			}

			sort(Pil.begin(), Pil.end(), order);
		
			for(int j = 0; j < K; j++){
				cin >> Pontos;
				Pil[j].Pontos += Pontos;
			}

			for(int f = 0; f < P; f++){
				cout << "f = " << f << " Id = " << Pil[f].Id << " Pontos = " << Pil[f].Pontos << " Posicao = " << Pil[f].Posicao << endl;
			}

			Winners.push_back(Pil[0].Id);
			for(int v = 1; v < Pil.size(); v++){
				if(Pil[v].Pontos >= Pil[0].Pontos){
					Winners.push_back(Pil[v].Id);					
				}
			}

			sort(Winners.begin(), Winners.end());

			for(int c = 0; c < Winners.size(); c++){
				cout << Winners[c] << " ";
			}

			Aux++;
			cout << endl;

			for(int h = 0; h < P; h++){
				Pil[h].Pontos = 0;
			}
		}

		cin >> G >> P;
	}
}
