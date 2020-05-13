//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){

	desync;

	int Voltas;
	vector <double> Bateria;
	vector <double> MelhoresTempos;
	double Input;	
	
	while(cin >> Voltas){
		for(int i = 0; i < Voltas; i++){
			cin >> Input;
			Bateria.push_back(Input);
		}
		
		sort(Bateria.begin(), Bateria.end());
		MelhoresTempos.push_back(Bateria[0]);
		
		Bateria.clear();
	}

	sort(MelhoresTempos.begin(), MelhoresTempos.end());

	for(int i = 0; i < MelhoresTempos.size(); i++){
		cout << fixed << setprecision(2) << MelhoresTempos[i] << endl;
	}

}
