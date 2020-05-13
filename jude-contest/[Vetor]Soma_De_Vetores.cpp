//Autor: Hérson Reis Rezende dos Santos
//Disciplina: Introdução à Lógica de Programação
//Ano: 1º Semestre de Bacharelado em Ciências da Computação (2019.2)
//Linguagem: C++

#include <iostream>
using namespace std;

int main(){

	int N;
	cin >> N;
	int A[N];
	int B[N];
	int C[N];

	for(int i = 0; i < N; i++){
		cin >> A[i];
	}
	for(int i = 0; i < N; i++){
		cin >> B[i];
	}
	for(int i = 0; i < N; i++){
		C[i] = A[i]+B[i];
	}
	for(int i = 0; i < N; i++){
		cout << C[i] << " ";
	}
}
