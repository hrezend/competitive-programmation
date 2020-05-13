//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;


struct Pessoas{
	int id;
	int dinheiro;
};

int main(){

	desync;
	queue <Pessoas> pessoas;
	Pessoas input;
	int Quantidade, Tempo, Ingresso;
	cin >> Quantidade >> Tempo >> Ingresso;

	for(int i = 0; i < Quantidade; i++){
		cin >> input.id >> input.dinheiro;
		if(input.dinheiro >= Ingresso){
			pessoas.push(input);
		}
	}
	for(int i = 0; i < Tempo; i++){		
		if(pessoas.front().dinheiro >= Ingresso){
			pessoas.front().dinheiro -= Ingresso;
			if(pessoas.front().dinheiro < Ingresso){
				pessoas.pop();		
			}
			else{
				pessoas.push(pessoas.front());
				pessoas.pop();
			}
		}
		else{
			pessoas.pop();
		}

	}
	if(pessoas.empty()){
		cout << "SEM FILA" << endl;
	}
	else{
		for(int i = 0; i < pessoas.size(); i++){
			cout << pessoas.front().id << " " << pessoas.front().dinheiro << endl;
			pessoas.push(pessoas.front());
			pessoas.pop();
		}
	}			
}
