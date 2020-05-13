//Autor: Hérson Reis Rezende dos Santos
//Disciplina: Introdução à Lógica de Programação
//Ano: 1º Semestre de Bacharelado em Ciências da Computação (2019.2)
//Linguagem: C++

#include <bits/stdc++.h>
using namespace std;

int main(){

	//Declaração de variáveis
	int Linhas, Colunas, Tiros;
	cin >> Linhas >> Colunas >> Tiros;
	int Matriz[Linhas][Colunas];

	int Afundados = 0, Navios = 0;
	int X, Y;
	string Ganhador;

	//Entrada de dados (determinação e contagem dos navios)
	for(int i = 0; i < Linhas; i++){
		for(int k = 0; k < Colunas; k++){
			cin >> Matriz[i][k];
			if(Matriz[i][k] == 1){
				Navios++;
			}
		}
	}
	
	//Manipulação dos dados (afundando os navios, caso existam em posição)
	for(int i = 0; i < Tiros; i++){
		cin >> X >> Y;
		if(Matriz[X][Y] == 1){
			Afundados++;
			Matriz[X][Y] = 0;
		}
	}
	
	//Impressão do vencedor do jogo de batalha naval
	if(Navios/2 <= Afundados){
		Ganhador = "Bira";
	}
	else{
		Ganhador = "Vidal";	
	}
	
		cout << Ganhador << endl;
}