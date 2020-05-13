//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

struct Candidato{
    int ID;
	double Nota;
};

bool cmpNota(Candidato a, Candidato b){
  return (a.Nota > b.Nota);
}

int main(){
    desync;
    vector <Candidato> candidatos;
    vector <Candidato>::iterator it;
    Candidato input;
    
	int N, Q;
	cin >> N >> Q;

	for(int i = 0; i < N; i++){
		cin >> input.Nota >> input.ID;
		candidatos.push_back(input);
    }

    sort(candidatos.begin(), candidatos.end(), cmpNota);

    for(it = candidatos.begin(); it < candidatos.begin()+Q; it++){
		cout << (*it).ID << endl;
	}
	
}
