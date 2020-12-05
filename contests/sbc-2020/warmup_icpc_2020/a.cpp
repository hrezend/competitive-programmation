#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back
#define endl '\n'

using namespace std;

int main(){

	desync;
	int capacidade, alunos;
	cin >> capacidade >> alunos;

	capacidade = capacidade - 1;
	
	if(alunos % capacidade == 0){
		cout << alunos/capacidade << endl;
	}
	else{
		cout << alunos/capacidade+1 << endl;
	}

}