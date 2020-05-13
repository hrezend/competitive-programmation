//Autor: Hérson Reis Rezende dos Santos
//Disciplina: Introdução à Lógica de Programação
//Ano: 1º Semestre de Bacharelado em Ciências da Computação (2019.2)
//Linguagem: C++

#include <bits/stdc++.h>
using namespace std;

int main(){
  
  //Declaração de variáveis e Entrada de dados
  string NomeLivro;
  int NumLivros, NumMax, Contador = 0;
  cin >> NumLivros;
  cin >> NumMax;
  cin.ignore();
  
	//Algoritmo de Verificação com impressão de saída para cada caso de teste
    for(int i = 0; i < NumLivros; i++){
        getline(cin, NomeLivro);
        int Tamanho = NomeLivro.size();
        
        for(int j = 0; j < Tamanho; j++){
            if(NomeLivro.at(j) > 97 && NomeLivro.at(j) < 123 && NomeLivro.at(j) != 101 && NomeLivro.at(j) != 105 && NomeLivro.at(j) != 111 && NomeLivro.at(j) != 117){
                Contador++;
            }    
        }
        
        if(Contador > NumMax){
            cout << "0" << endl;
        }
        else{
            cout << "1" << endl;
        }
        
        Contador = 0;
    }
	
}
