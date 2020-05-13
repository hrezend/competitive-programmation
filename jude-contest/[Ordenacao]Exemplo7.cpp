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
    double Valores[N];
	double aux;
    int menor_i;
    
	//Entrada de dados
    for(int i = 0; i < N; i++){
        cin >> Valores[i];    
    }
    
	//Algorítmo de ordenação
    for (int i = 0; i < N-1; i++){
        menor_i = i;
        for (int j = i+1 ; j < N; j++){
            if(Valores[j] > Valores[menor_i]){
                menor_i = j;
            }
        }
        aux = Valores[i];
        Valores[i] = Valores[menor_i];
        Valores[menor_i] = aux;
    }

	//Impressão de saída
    for(int i = 0; i < 3; i++){
        cout << fixed << setprecision(2) << Valores[i] << endl;    
    }

}