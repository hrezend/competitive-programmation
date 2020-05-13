//Author: Hérson Rezende - 2ºSM de CC
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){

	desync;
	queue <int> Moedas;
	int TotalMoedas = 0, Punicao = 0;
	int N, M;
	cin >> N >> M;
	int Matriz[N][M];

	for(int q = 0; q < N; q++){
		for(int w = 0; w < M; w++){
			cin >> Matriz[q][w];
		}
	}

	for(int q = 0; q < M; q++){
		if(q % 2 == 0){
			for(int w = 0; w < N; w++){
				if(Punicao > 0 && Matriz[w][q] != 0){
					Punicao--;
				}
				if(Matriz[w][q] < 0){
					if(!Moedas.empty()){
						if(Moedas.front() < abs(Matriz[w][q])){
							Punicao = abs(Matriz[w][q])+1;
							Moedas.push(Moedas.front());
							Moedas.pop();
						}
						else{
							Moedas.front() -= abs(Matriz[w][q]);
							if(Moedas.front() == 0){
								Moedas.pop();
							}
							else{
								Moedas.push(Moedas.front());
								Moedas.pop();
							}
							Punicao = 0;
						}
					}
					else{
						Punicao = abs(Matriz[w][q])+1;
					}
				}
				if(Matriz[w][q] > 0){
					if(Punicao == 0){
						Moedas.push(Matriz[w][q]);
					}
				}
			}
		}

		if(q % 2 != 0){
			for(int w = N-1; w >= 0; w--){
				if(Punicao > 0 && Matriz[w][q] != 0){
					Punicao--;
				}
				if(Matriz[w][q] < 0){
					if(!Moedas.empty()){
						if(Moedas.front() < abs(Matriz[w][q])){
							Punicao = abs(Matriz[w][q])+1;
							Moedas.push(Moedas.front());
							Moedas.pop();
						}
						else{
							Moedas.front() -= abs(Matriz[w][q]);
							if(Moedas.front() == 0){
								Moedas.pop();
							}
							else{
								Moedas.push(Moedas.front());
								Moedas.pop();
							}
							Punicao = 0;
						}
					}
					else{
						Punicao = abs(Matriz[w][q])+1;
					}
				}
				if(Matriz[w][q] > 0){
					if(Punicao == 0){
						Moedas.push(Matriz[w][q]);
					}
				}
			}
		}
	}

	while(!Moedas.empty()){
		TotalMoedas += Moedas.front();
		Moedas.pop();
	}
	cout << TotalMoedas << endl;	
}
