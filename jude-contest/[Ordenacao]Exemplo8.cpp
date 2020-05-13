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
    string Nomes[N];
    cin.ignore();
	string aux;
    int menor_i;
    
	//Entrada de dados
    for(int i = 0; i < N; i++){
        getline(cin, Nomes[i]);    
    }
  
    //Algorítmo de ordenação de strings
    for (int i = 0; i < N-1; i++){
        menor_i = i;
        for (int j = i+1 ; j < N; j++){
            if(Nomes[j] < Nomes[menor_i]){
                menor_i = j;
            }
        }
        aux = Nomes[i];
        Nomes[i] = Nomes[menor_i];
        Nomes[menor_i] = aux;
    }

    
	//Impressão de saída
    for(int i = 0; i < N; i++){
        cout << Nomes[i] << endl;    
    }

}