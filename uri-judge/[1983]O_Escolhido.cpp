//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

struct Aluno{
	int Matricula;
	double Nota;
};

bool CmpNota(Aluno a, Aluno b){
	return(a.Nota > b.Nota);
}

int main(){

	desync;

	vector <Aluno> alunos;
	Aluno input;
	int QtdAlunos, Posicao;
	bool Imprime = false;

	cin >> QtdAlunos;

	for(int i = 0; i < QtdAlunos; i++){
		cin >> input.Matricula >> input.Nota;
		alunos.push_back(input);
	}
	
	sort(alunos.rbegin(), alunos.rend(), CmpNota);
	for(int k = 0; k < QtdAlunos; k++){
		if(alunos[k].Nota >= 8){
			Imprime = true;
			Posicao = k;
		}
	}

	if(Imprime){
		cout << alunos[Posicao].Matricula << endl;
	}
	else{
		cout << "Minimum note not reached" << endl;
	}

}
