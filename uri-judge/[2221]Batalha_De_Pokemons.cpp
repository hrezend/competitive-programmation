//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){

	desync;
	double GolpeD, GolpeG;
	int Bonus, BD, BG;
	int LD, AtaqueD, DefesaD;
	int LG, AtaqueG, DefesaG;
	int Casos;
	cin >> Casos;


	for(int i = 0; i < Casos; i++){
		cin >> Bonus;
		cin >> AtaqueD >> DefesaD >> LD;
		cin >> AtaqueG >> DefesaG >> LG;

		if(LD%2 == 0){
			BD = Bonus;
		}
		else{
			BD = 0;
		}
		if(LG%2 == 0){
			BG = Bonus;
		}
		else{
			BG = 0;
		}

		GolpeD = (AtaqueD+DefesaD)/2 + BD;
		GolpeG = (AtaqueG+DefesaG)/2 + BG;

		if(GolpeD == GolpeG){
			cout << "Empate" << endl;
		}
		else if(GolpeD > GolpeG){
			cout << "Dabriel" << endl;
		}
		else if(GolpeD < GolpeG){
			cout << "Guarte" << endl;
		}
		
	}
}
