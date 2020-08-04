//Author: Herson Rezende - 2ºSemestre de CC - UFBA - 2020
//Site: hrezend.github.io/resume-web
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

struct Pacotes{
	int ID;
	int TIME;
};

int Order(vector <Pacotes> &v){
	int total_time = 0;
	int aux_id, aux_time;
	bool flag = true;
	
	while(flag){
		for(int i = 0; i < v.size()-1; i++){
			if(v[i].ID > v[i+1].ID){
				//armazenando na variavel auxiliar
				aux_id = v[i].ID;
				aux_time = v[i].TIME;
	
				//mudanca de posicao
				v[i].ID = v[i+1].ID;
				v[i].TIME = v[i+1].TIME;
				v[i+1].ID = aux_id;
				v[i+1].TIME = aux_time;
				
				//incremento dos tempos
				total_time += v[i].TIME;
				total_time += v[i+1].TIME;
			}
		}
		flag = false;
		for(int i = 0; i < v.size()-1; i++){
			if(v[i].ID > v[i+1].ID){
				flag = true;
			} 
		}
	}
	return total_time;
}

void solve(){
	int n;
	while(cin >> n){
		vector <Pacotes> pct;
		Pacotes input;
		
		for(int i = 0; i < n; i++){
			cin >> input.ID;
			input.TIME = 0;
			pct.push_back(input);
		}
		for(int i = 0; i < n; i++){
			cin >> input.TIME;
			pct[i].TIME = input.TIME;
		}
		
		int answer = Order(pct);
		cout << answer << endl;
	}
}

int main(){
  desync;
  solve();
}