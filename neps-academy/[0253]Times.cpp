//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back
#define endl '\n'
#define debug(x) cout << x << endl
#define sz(x) (int)x.size()
#define all(x) (x.begin(), x.end())
#define rall(x) (x.rbegin(), x.rend())
#define top(x) (x.top())
#define front(x) (x.front())
#define pop(x) (x.pop())
#define empty(x) (x.empty())

using namespace std;
typedef long long ll;
typedef pair <int, int> pii;
typedef vector <int> vi;
typedef vector <pii> vii;
typedef vector <vi> matriz;

int main(){

	desync;
	vector <pair<int, string>> aluno;
	vector <pair<string, int>> times;
	string nome;
	int habil, count = 0;
	int qtd_alunos, qtd_times;
	cin >> qtd_alunos >> qtd_times;

	for(int i = 0; i < qtd_alunos; i++){
		cin >> nome >> habil;
		aluno.pb(make_pair(habil, nome));
	}
	
	sort rall(aluno);
	for(int i = 0; i < qtd_alunos; i++){
		times.pb(make_pair(aluno[i].second, count));
		count++;
		if(count == qtd_times){
			count = 0;
		}
	}


	sort all(times);
	for(int i = 0; i < qtd_times; i++){
		cout << "Time " << i+1 << endl;
		for(int j = 0; j < qtd_alunos; j++){
			if(times[j].second == i){
				cout << times[j].first << endl;
			}
		}
		cout << endl;
	}

}
