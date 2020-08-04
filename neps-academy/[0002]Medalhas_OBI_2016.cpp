//Author: Herson Rezende - 2ºSemestre de CC - UFBA - 2020
//Site: hrezend.github.io/resume-web
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

struct Nadador{
	int id;
	int tempo;
};

bool compare(Nadador a, Nadador b){
	return(a.tempo < b.tempo);
}

void solve(){
	vector <Nadador> nad;
	Nadador input;
	
	for(int i = 1; i <= 3; i++){
		cin >> input.tempo;
		input.id = i;
		nad.push_back(input);
	}
	sort(nad.begin(), nad.end(), compare);
	
	for(int i = 0; i < nad.size(); i++){
		cout << nad[i].id << endl;
	}
}

int main(){
  desync;
  solve();
}