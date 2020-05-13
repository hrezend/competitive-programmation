//Autor: Hérson Reis Rezende dos Santos
//Disciplina: Introdução à Lógica de Programação
//Ano: 1º Semestre de Bacharelado em Ciências da Computação (2019.2)
//Linguagem: C++

#include <bits/stdc++.h>
using namespace std;

int main(){

	//Declaração de variáveis
	int N;
	cin >> N;
	string A, B;
	int TamA, TamB;
	string Shipp;
	
	//Algorítmo de tratamento da string (junção de metades de strings), com impressão para cada caso de teste
	for(int i = 0; i < N; i++){
		cin >> A >> B;
		TamA = A.size();
		TamB = B.size();

		if(TamA % 2 == 0){
			for(int k = 0; k < TamA/2; k++){
				Shipp += A[k];
			}
		}
		else if(TamA % 2 != 0){
			for(int k = 0; k < TamA/2; k++){
				Shipp += A[k];
			}
		}

		if(TamB % 2 == 0){
			for(int k = TamB/2; k < TamB; k++){
				Shipp += B[k];
			}
		}
		else if(TamB % 2 != 0){
			for(int k = TamB/2; k < TamB; k++){
				Shipp += B[k];
			}
		}

		cout << Shipp << endl;
		Shipp = "";
	}

}