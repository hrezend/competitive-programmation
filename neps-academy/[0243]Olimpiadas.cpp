//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

struct Pais{
	int Id;
	int Ouro, Prata, Bronze;
};

bool order(Pais a, Pais b){
	return(a.Ouro > b.Ouro || a.Ouro == b.Ouro && a.Prata > b.Prata || a.Ouro == b.Ouro && a.Prata == b.Prata && a.Bronze > b.Bronze || a.Ouro == b.Ouro && a.Prata == b.Prata && a.Bronze == b.Bronze && a.Id < b.Id);
}

int main(){
	desync;
	
	int N, M;
	cin >> N >> M;

	vector <Pais> Paises;
	Pais input;
	int Medalhas[M][3];
	int Count = 0;

	for(int i = 0; i < N; i++){
		input.Id = i+1;
		input.Ouro = 0;
		input.Prata = 0;
		input.Bronze = 0;
		Paises.push_back(input);
	}

	for(int i = 0; i < M; i++){
		for(int j = 0; j < 3; j++){
			cin >> Medalhas[i][j];
		}
	}

	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			for(int k = 0; k < 3; k++){
				if(Paises[i].Id == Medalhas[j][k]){
					if(k == 0){					
						Paises[i].Ouro += 1;
					}
					if(k == 1){					
						Paises[i].Prata += 1;
					}
					if(k == 2){					
						Paises[i].Bronze += 1;
					}
				}
			}
		}
	}

	sort(Paises.begin(), Paises.end(), order);

	for(int i = 0; i < N; i++){
		cout << Paises[i].Id << " ";
	}
	
	cout << endl;
	
}
