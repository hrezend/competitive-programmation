//Autor: Hérson Reis Rezende dos Santos
//Disciplina: Introdução à Lógica de Programação
//Ano: 1º Semestre de Bacharelado em Ciências da Computação (2019.2)
//Linguagem: C++

#include <bits/stdc++.h>
using namespace std;

int main(){
  
  //Declaração de variáveis e Entrada de dados
  string Palavra;
  cin >> Palavra;
  int Tamanho = Palavra.size();
  string PalavraInvertida;
  
  //Invertendo a string de entrada com a composição de uma variável auxiliar
  for(int i = Tamanho - 1; i >= 0; i--){
    PalavraInvertida += Palavra[i]; 
  }
  
  //Comparando e imprimindo se são ou não palindromas
  if(Palavra == PalavraInvertida){
	cout << "Sim" << endl;
  }
  else{
    cout << "Nao" << endl;
  }

}
