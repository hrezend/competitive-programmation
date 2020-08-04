//Author: Herson Rezende - 2ºSemestre de CC - UFBA - 2020
//Site: hrezend.github.io/resume-web
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

void solve(){
	string input;
	int qtd_test;
	cin >> qtd_test;
	
	while(qtd_test--){
		cin >> input;
		string answer = "";
		int menor = INT_MAX, pos;
		vector <int> num;
		for(int i = 0; i < input.length(); i++){
			int aux = (input[i]-48);
			num.push_back(aux);
			if(menor > aux && aux != 0){
				menor = aux;
				pos = i;
			}
		}
		
		answer += (num[pos]+48);
		num[pos] = 99999999999999;
		sort(num.begin(), num.end());
		for(int i = 0; i < num.size()-1; i++){
			answer += (num[i]+48);
		}
		cout << answer << endl;
	}
}

int main(){
  desync;
  solve();
}