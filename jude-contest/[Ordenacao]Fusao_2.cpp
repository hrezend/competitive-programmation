//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

struct Intervalo{
    int Inicio;
	int Fim;
};

bool cmpIntervalo(Intervalo a, Intervalo b){
  return (a.Inicio < b.Inicio || (a.Inicio == b.Inicio && a.Fim < b.Fim));
}

int main(){
    desync;
    vector <Intervalo> intervalos;
    Intervalo input;
    
	int N;
	cin >> N;

	for(int i = 0; i < N; i++){
		cin >> input.Inicio >> input.Fim;
		intervalos.push_back(input);
    }

    sort(intervalos.begin(), intervalos.end(), cmpIntervalo);

	cout << intervalos[0].Inicio << " ";
  	for(int i = 0; i < N-1; i++){
    	if(intervalos[i+1].Inicio > intervalos[i].Fim){
      		cout << intervalos[i].Fim << "\n" << intervalos[i+1].Inicio << " ";
		}
	}
  	cout << intervalos[intervalos.size()-1].Fim << endl;
	
}
