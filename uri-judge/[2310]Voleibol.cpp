//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
	desync;
	
	string Nome;
	int N;
	int Saque, Bloqueio, Ataque, Saque2, Bloqueio2, Ataque2;
	int TS = 0, TB = 0, TA = 0, TSS = 0, TSB = 0, TSA = 0;
	
	cin >> N;

	for(int i = 0; i < N; i++){
		cin >> Nome >> Saque >> Bloqueio >> Ataque >> Saque2 >> Bloqueio2 >> Ataque2;

		TS += Saque;
		TSS += Saque2;
		TB += Bloqueio;
		TSB += Bloqueio2;
		TA += Ataque;
		TSA += Ataque2;
	}

	cout << fixed << setprecision(2) << "Pontos de Saque: " << (double)(100*TSS)/TS << " %." << endl;
	cout << fixed << setprecision(2) << "Pontos de Bloqueio: " << (double)(100*TSB)/TB << " %." << endl;
	cout << fixed << setprecision(2) << "Pontos de Ataque: " << (double)(100*TSA)/TA << " %." << endl;
}
