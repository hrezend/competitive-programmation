//Author: Herson Rezende - 2ºSemestre de CC - UFBA - 2020
//Site: hrezend.github.io/resume-web
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define all(x) (x.begin(), x.end())
#define rall(x) (x.rbegin(), x.rend())
#define mkp(x,y) (make_pair(x,y))
#define out(x) cout << x << endl
using namespace std;

struct Instrumentos{
	int indice;
	int dias;
};

bool compare(Instrumentos a, Instrumentos b){
	return(a.dias < b.dias);
}

int main(){
	desync;
	int qtd_instrumentos, qtd_dias;
	cin >> qtd_instrumentos >> qtd_dias;
	vector <Instrumentos> vec;
	vector <int> answer;
	Instrumentos input;

	for(int i = 0; i < qtd_instrumentos; i++){
		cin >> input.dias;
		input.indice = i+1;
		vec.pb(input);
	}
	
	sort(vec.begin(), vec.end(), compare);
	for(int i = 0; i < qtd_instrumentos; i++){
		if(vec[i].dias <= qtd_dias){
			answer.pb(vec[i].indice);
			qtd_dias = qtd_dias - vec[i].dias;
		}
	}
	
	out(answer.size());
	if(answer.size() != 0){
		sort(answer.begin(), answer.end());
		for(int i = 0; i < answer.size(); i++){
			cout << answer[i] << " ";
		}
		cout << endl;
	}
}