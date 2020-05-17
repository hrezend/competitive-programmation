//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

struct Player{
	int Tempo;
	int Posicao;
};

bool order(Player a, Player b){
	return (a.Tempo > b.Tempo);
}

int main(){
	desync;
	
	int N = 3;
	Player input;
	vector <Player> p;
	
	for(int i = 0; i < N; i++){
		cin >> input.Tempo;
		input.Posicao = i+1;
		p.push_back(input);
	}

	sort(p.rbegin(), p.rend(), order);

	for(int i = 0; i < N; i++){
		cout << p[i].Posicao << endl;
	}
}
