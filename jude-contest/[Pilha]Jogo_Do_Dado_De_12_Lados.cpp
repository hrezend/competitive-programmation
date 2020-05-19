//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
	desync;

	stack <int> PilhaP;
	stack <int> PilhaJ;	
	int InputP, InputJ;
	int ptsP = 0, ptsJ = 0;

	for(int i = 0; i < 12; i++){
		cin >> InputJ >> InputP;
	
		if(InputJ > 0){
			PilhaJ.push(InputJ);
		}
		if(InputP > 0){
			PilhaP.push(InputP);
		}
		if(InputJ < 0){
			int Modulo = InputJ*(-1);
			for(int z = 0; z < Modulo; z++){
				if(!PilhaP.empty()){
					PilhaP.pop();
				}
			}
		}
		if(InputP < 0){
			int Modulo = InputP*(-1);
			for(int z = 0; z < Modulo; z++){
				if(!PilhaJ.empty()){
					PilhaJ.pop();
				}
			}
		}	
	}
	for(int j = 0; j < PilhaP.size(); j++){
		ptsP += PilhaP.top();
		PilhaP.pop();
	}
	for(int j = 0; j < PilhaJ.size(); j++){
		ptsJ += PilhaJ.top();
		PilhaJ.pop();
	}

	if(ptsP > ptsJ){
		cout << "Pedrinho " << ptsP << endl; 
	}
	else if(ptsP < ptsJ){
		cout << "Joaozinho " << ptsJ << endl; 
	}
	else if(ptsP == ptsJ){
		cout << "Empate" << endl; 
	}
}
