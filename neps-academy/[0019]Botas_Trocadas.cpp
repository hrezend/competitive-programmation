//Author: Herson Rezende - 2ºSemestre de CC - UFBA - 2020
//Site: hrezend.github.io/resume-web
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define out(x) cout << x << endl
using namespace std;

void solve(){
	desync;
	int resultado = 0, qtd_p;
	vector<pair<int, char>> v;
    map<int, pair<int, int>> mapa;
    pair<int, char> aux;
  
    cin >> qtd_p;

    for(int i = 0; i < qtd_p ; i++){
        cin >> aux.first >> aux.second;
        mapa[aux.first] = make_pair(0,0);
        v.push_back(aux);
    } 
    for(int i = 0; i < qtd_p; i++){
        if(v[i].second == 'D'){
            mapa[v[i].first].second++;
		}
        else{
            mapa[v[i].first].first++;
		}
    }
    for(auto i = mapa.begin() ; i != mapa.end(); i++ ){
        resultado += min((*i).second.first , (*i).second.second);
    }

	out(resultado);
}

int main(){
  desync;
  solve();
}