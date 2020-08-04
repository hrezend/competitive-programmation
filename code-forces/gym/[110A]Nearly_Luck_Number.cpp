//Author: Herson Rezende - 2ºSemestre de CC - UFBA - 2020
//Site: hrezend.github.io
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pb push_back

using namespace std;

int main(){
    desync;
	string sequence;
	bool flag = true;
	
	cin >> sequence;
	int tamanho = sequence.length();
	vector <char> aux;

	for(int i = 0; i < tamanho; i++){
		if(sequence[i] == '4' || sequence[i] == '7'){
			aux.pb(sequence[i]);
		}
	}

	if(aux.size() == 4 || aux.size() == 7){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
}
