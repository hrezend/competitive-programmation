//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

struct Candidato{
    string Nome;
	int Nota1;
	int Nota2;
};

bool cmpCandidato(Candidato a, Candidato b){
  return (a.Nota2 < b.Nota2 || a.Nota2 == b.Nota2 && a.Nota1 < b.Nota1);
}

int main(){
    desync;
    vector <Candidato> candidatos;
    vector <Candidato>::iterator it;
    Candidato input;
    
	int N;
	cin >> N;

	for(int i = 0; i < N; i++){
		cin >> input.Nome >> input.Nota1 >> input.Nota2;		
		candidatos.push_back(input);
    }

    sort(candidatos.rbegin(), candidatos.rend(), cmpCandidato);

    for(it = candidatos.begin(); it < candidatos.begin()+3; it++){
		cout << (*it).Nome << endl;
	}
	
}
