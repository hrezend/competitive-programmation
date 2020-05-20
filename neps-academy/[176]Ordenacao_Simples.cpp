//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
	desync;
	
	int N;
	int Input;
	cin >> N;
	vector <int> Vetor;
		
	for(int i = 0; i < N; i++){
		cin >> Input;
		Vetor.push_back(Input);
	}
	
	sort(Vetor.begin(), Vetor.end());

	for(int i = 0; i < N; i++){
		cout << Vetor[i] << " ";
	}
	cout << endl;
}
