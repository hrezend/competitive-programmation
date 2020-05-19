//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
	desync;
	
	int N, Input, Contador = 0;
	cin >> N;
	vector <int> Vetor;
	vector <int> VetorClone;
	vector <int> Errors;
		
	for(int i = 0; i < N; i++){
		cin >> Input;
		Vetor.push_back(Input);
		VetorClone.push_back(Input);
	}
	
	sort(VetorClone.begin(), VetorClone.end());
	
	for(int i = 0; i < N; i++){
		if(Vetor[i] != VetorClone[i]){
			Contador++;
			Errors.push_back(Vetor[i]);
		}
	}
	
	sort(Errors.begin(), Errors.end());

	if(!Errors.empty()){
		cout << Contador << endl;
		for(int i = 0; i < Errors.size(); i++){
			cout << Errors[i] << " ";
		}
		cout << endl;
	}
	else{
		cout << "0" << endl;
	}
}
