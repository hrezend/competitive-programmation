//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){

	desync;
	int Tempo1, Tempo2, MenorTempo = 0;
	int A, B, C;
	cin >> A >> B >> C;

	MenorTempo = (4*A) + (2*B);
	Tempo1 = (2*A) + (2*C);
	Tempo2 = (2*B) + (4*C);

	if(Tempo1 < MenorTempo){
		MenorTempo = Tempo1;
	}
	if(Tempo2 < MenorTempo){
		MenorTempo = Tempo2;
	}

	cout << MenorTempo << endl;
}
