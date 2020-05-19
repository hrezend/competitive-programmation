//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

struct Piloto{
	int Id;
	int Pontos;
};

bool order(Piloto a, Piloto b){
	return(a.Pontos > b.Pontos || a.Pontos == b.Pontos && a.Id < b.Id);
}

int main(){
	desync;

	int G, P;
	cin >> G >> P;
	
	while(G != 0 && P != 0){
		vector <Piloto> Pil;
		Piloto Input;
		int OrdemChegada[G][P];

		Pil.clear();
		for(int i = 1; i <= P; i++){
			Input.Id = i;
			Input.Pontos = 0;
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
			int K;
			int Pontos[P] = {0};
			int Winners[P] = {0};
			cin >> K;

			Pil.clear();
			for(int i = 1; i <= P; i++){
				Input.Id = i;
				Input.Pontos = 0;
				Pil.push_back(Input);
			}
	
			for(int j = 0; j < K; j++){
				cin >> Pontos[j];
			}
	
			for(int z = 0; z < P; z++){
				for(int x = 0; x < G; x++){
					Pil[z].Pontos += Pontos[(OrdemChegada[x][z]-1)];
				}
			}
		
			sort(Pil.begin(), Pil.end(), order);

			Winners[0] = Pil[0].Id;
			for(int f = 1; f < P; f++){
				if(Pil[f].Pontos == Pil[0].Pontos){
					Winners[f] = Pil[f].Id;
				}
			}
			
			sort(Winners, Winners+P);

			for(int c = 0; c < P; c++){
				if(Winners[c] != 0){
					cout << Winners[c] << " ";
				}
			}

			cout << endl;
		}

		cin >> G >> P;
	}
}
