//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

struct Personagem{
	string Nome;
	int Poder;
};

int main(){
	
	desync;

	vector <Personagem> personagens;
	Personagem input;
	int C;
	cin >> C;

	for(int i = 0; i < C; i++){
		cin >> input.Nome >> input.Poder;
		personagens.push_back(input);
	}

	for(int i = 0; i < personagens.size(); i++){
		if(personagens[i].Nome == "Thor"){
			cout << "Y" << endl;
		}
		else{
			cout << "N" << endl;
		}
	}

}
