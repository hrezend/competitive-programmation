//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
	desync;

	vector <int> Vetor;
	int Input;	

	for(int i = 0; i < 10; i++){
		cin >> Input;
		Vetor.push_back(Input);
	}

	sort(Vetor.begin(), Vetor.end());
	for(int i = 0; i < 10; i++){
		cout << Vetor[i] << " ";
	}

	cout << endl;

	sort(Vetor.rbegin(), Vetor.rend());	
	for(int i = 0; i < 10; i++){
		cout << Vetor[i] << " ";
	}

	cout << endl;
}
