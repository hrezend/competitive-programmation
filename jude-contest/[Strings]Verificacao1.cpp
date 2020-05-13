//Autor: Hérson Reis Rezende dos Santos
//Disciplina: Introdução à Lógica de Programação
//Ano: 1º Semestre de Bacharelado em Ciências da Computação (2019.2)
//Linguagem: C++

#include <bits/stdc++.h>
using namespace std;

int main(){
  
	//Declaração de variáveis e Entrada de dados
    int QtdBaloes;
    cin >> QtdBaloes;
    cin.ignore();
    
    string Sequencia;
    cin >> Sequencia;
  
    int Meio = (QtdBaloes/2);
    
	//Algorítmo de verificação com impressão de saída
    if(Sequencia.front() != Sequencia.at(Meio) && Sequencia.at(Meio) != Sequencia.back() && Sequencia.front() != Sequencia.back()){
        cout << "Sim" << endl;    
    }
    else{
        cout << "Nao" << endl;
    }
  
}
