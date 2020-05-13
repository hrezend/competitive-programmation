//Autor: Hérson Reis Rezende dos Santos
//Disciplina: Introdução à Lógica de Programação
//Ano: 1º Semestre de Bacharelado em Ciências da Computação (2019.2)
//Linguagem: C++

#include <bits/stdc++.h>
using namespace std;

int main() {

	//Declaração de variáveis
	int NumSapos, NumPedras;
	cin >> NumSapos;
	cin >> NumPedras;

	int TamPulo[NumSapos];
	int Pedras[NumPedras] = {1};

	//Ler o tamanho do pulo para cada sapo.
	for(int i = 0; i < NumSapos; i++){
		cin >> TamPulo[i];
	}

	//Algoritmo para mudar a condição de cada pedra, de 0 para 1, caso seja pisada.
	for(int j = 0; j < NumSapos; j++){
		for(int i = 0; i < NumPedras; i+=TamPulo[j]){
			Pedras[i] = 1;
		}
	}

	//Imprimir a condição das pedras.
	for(int i = 0; i < NumPedras; i++){
		cout << Pedras[i] << " ";
	}
 
}