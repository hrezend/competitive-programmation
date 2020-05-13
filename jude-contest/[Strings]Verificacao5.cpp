//Autor: Hérson Reis Rezende dos Santos
//Disciplina: Introdução à Lógica de Programação
//Ano: 1º Semestre de Bacharelado em Ciências da Computação (2019.2)
//Linguagem: C++

#include <bits/stdc++.h>
using namespace std;

int main(){
  
  //Declaração de variáveis
  string Padrao;
  int Digitos[6], Tamanho = 0;  
  
	//Entrada e Tratamento de dados
    for(int i = 0; i < 6; i++){
        getline(cin, Padrao);
        Tamanho = Padrao.size();
        Digitos[i] = Tamanho;
        Tamanho = 0;
    }
	
    //Impressão de saída
    for(int i = 0; i < 6; i++){
        cout << Digitos[i];
    }
  
}
