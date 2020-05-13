//Autor: Hérson Reis Rezende dos Santos
//Disciplina: Introdução à Lógica de Programação
//Ano: 1º Semestre de Bacharelado em Ciências da Computação (2019.2)
//Linguagem: C++

#include <bits/stdc++.h>
using namespace std;

int main(){

	//Declaração de variáveis e Entrada de dados
	string Nome;
	getline (cin, Nome);

	int QuantidadeVagas;
	cin >> QuantidadeVagas;
	cin.ignore();
	string Vetor[QuantidadeVagas];
	
	int condicao = 0;

	//Algorítmo de verificação
	for(int i = 0; i < QuantidadeVagas; i++){
		getline (cin, Vetor[i]);
	}

	for (int i = 0; i < QuantidadeVagas; i++){
		if(Nome == Vetor[i]){
			condicao = 1;
		}
	}

	//Impressão de saída
	if(condicao == 1){
			cout << "PARABENS" << endl;		
	}
	else{
			cout << "Vamos esperar a 2a chamada" << endl;
	}


return 0;
}