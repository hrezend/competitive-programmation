//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
	desync;
	vector <int> V;
	int input;
	for(int i = 0; i < 4; i++){
		cin >> input;
		V.push_back(input);
	}
	bool Condicao = false;

	sort(V.rbegin(), V.rend());

	if(V[0]+V[1] > V[2] && V[1]+V[2] > V[0] && V[0]+V[2] > V[1]){
		Condicao = true;
	}
	if(V[0]+V[1] > V[3] && V[1]+V[3] > V[0] && V[0]+V[3] > V[1]){
		Condicao = true;
	}
	if(V[0]+V[2] > V[3] && V[2]+V[3] > V[0] && V[0]+V[3] > V[2]){
		Condicao = true;
	}
	if(V[3]+V[2] > V[1] && V[2]+V[1] > V[3] && V[1]+V[3] > V[2]){
		Condicao = true;
	}
	
	
	if(Condicao){
		cout << "S" << endl;
	}
	else{
		cout << "N" << endl;
	}

}
