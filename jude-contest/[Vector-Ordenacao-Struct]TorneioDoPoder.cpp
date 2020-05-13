//Author: Hrz - 2ºSM de CC / Laboratório de Programação
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

struct Personagem{
  int Poder;
  string Nome;
};
bool cmpPoder(Personagem a, Personagem b){
  return (a.Poder > b.Poder || a.Poder == b.Poder && a.Nome < b.Nome);
}

int main(){
  desync;
  vector <Personagem> personagens;
  vector <Personagem>::iterator it;
  Personagem input;
	int Repeticoes, Impressoes;
	cin >> Repeticoes >> Impressoes;

  for(int i = 0; i < Repeticoes; i++){
    cin >> input.Nome >> input.Poder;
    personagens.push_back(input);
  }

  sort(personagens.begin(), personagens.end(), cmpPoder);

	for(it = personagens.begin(); it != personagens.begin()+Impressoes; it++){
		cout << (*it).Nome << " " << (*it).Poder << endl;
	}

}

