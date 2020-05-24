//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back
#define endl '\n'
using namespace std;

bool order(const pair <string, int> a, const pair <string,int> b){
	return (a.second > b.second || a.second == b.second && a.first < b.first);
}

int main(){

	desync;
	map <string, pair<int,int>> ranking;
	vector <pair<string, int>> impressao;
	string input_n;
	int qtd_p, min, cooldown;
	cin >> qtd_p >> cooldown;

	for(int i = 0; i < qtd_p; i++){
		cin >> input_n >> min;

		if(ranking.count(input_n)){
			if(min >= ranking[input_n].first+cooldown){
				ranking[input_n].second += 25;
				ranking[input_n].first = min;
			}
		}
		else{
			ranking[input_n] = make_pair(min, 25);
		}
	}

	for(auto i = ranking.begin(); i != ranking.end(); i++){
		//cout << (*i).first << " - " << (*i).second.first << " - " << (*i).second.second << endl;
		impressao.pb(make_pair((*i).first, (*i).second.second));
	}

	sort(impressao.begin(), impressao.end(), order);
	int contador = 0;
	cout << "--Rank do Nepscord--" << endl;
	for(int i = 0; i < 3; i++){
		if(contador < impressao.size()){
			int Nivel = (impressao[i].second/100)+1;
			cout << "#" << i+1 << ". " << impressao[i].first << " - Nivel " << Nivel << endl;
			contador++;
		}
		else{
			cout << "#" << i+1 << "." << endl;
		}
	}
}
