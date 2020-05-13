//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <bits/stdc++.h>
using namespace std;

int main(){

	int N;
	cin >> N;
	int Vetor[N];
	int Contador = 0;
	int Auxiliar;

	for(int i = 0; i < N; i++){
		cin >> Vetor[i];
	}
	for(int i = 0; i < N-1; i++){
		int MenorI = i;
		for(int j = i+1; j < N; j++){		
			if(Vetor[MenorI] > Vetor[j]){
				Auxiliar = Vetor[MenorI];
				Vetor[MenorI] = Vetor[j];
				Vetor[j] = Auxiliar;
			}
		}
	}

	for(int j = 0; j < N; j++){
		if(Vetor[j] > 0 && Vetor[j] < 8){
			cout << Vetor[j] << " ";
			Contador++;		
		}
	}

	if(Contador == 7){
		cout << endl;
		cout << "Saia Shenlong e realize o meu desejo" << endl;
	}
	else{
		cout << endl;
		cout << "Nao encontramos todas" << endl;
	}
}

