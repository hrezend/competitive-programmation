//Autor: Hérson Reis Rezende dos Santos
//Disciplina: Introdução à Lógica de Programação
//Ano: 1º Semestre de Bacharelado em Ciências da Computação (2019.2)
//Linguagem: C++

#include <bits/stdc++.h>
using namespace std;

int main(){

	//Declaração de variáveis
    int N, C;
    cin >> N >> C;
    string Nome[N];
    int Altura[N];
    int aux;
    string auxS;
    int menor_i;
    
	//Entrada de dados
    for(int i = 0; i < N; i++){
        cin >> Nome[i] >> Altura[i];    
    }
    
	//Algorítmo de ordenação
    for (int i = 0; i < N-1; i++){
        menor_i = i;
        for (int j = i+1 ; j < N; j++){
            if(Altura[j] > Altura[menor_i]){
                menor_i = j;
            }
        }
        aux = Altura[i];
        Altura[i] = Altura[menor_i];
        Altura[menor_i] = aux;
        
        auxS = Nome[i];
        Nome[i] = Nome[menor_i];
        Nome[menor_i] = auxS;
    }

	//Impressão de saída
	for(int i = 0; i < C; i++){
        cout << Nome[i] << endl;    
    }

}