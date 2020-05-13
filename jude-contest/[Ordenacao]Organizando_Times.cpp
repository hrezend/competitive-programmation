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
    int Quantidade[N];
    int Apto[N] = {0};
    int Inapto[N] = {0};
	int aux;
    int menor_i;
    
	//Entrada de dados
    for(int i = 0; i < N; i++){
        cin >> Quantidade[i];    
    }
   
	//Manipulação de dados
    for(int i = 0; i < N; i++){
        if(Quantidade[i] % 3 == 0){
            Apto[i] = Quantidade[i];
        }
        else{
            Inapto[i] = Quantidade[i];
        }
    }
    
    //Algoritmo de ordenação
    for (int i = 0; i < N-1; i++){
        menor_i = i;
        for (int j = i+1 ; j < N; j++){
            if(Apto[j] > Apto[menor_i]){
                menor_i = j;
            }
        }
        aux = Apto[i];
        Apto[i] = Apto[menor_i];
        Apto[menor_i] = aux;
    }
    for (int i = 0; i < N-1; i++){
        menor_i = i;
        for (int j = i+1 ; j < N; j++){
            if(Inapto[j] < Inapto[menor_i]){
                menor_i = j;
            }
        }
        aux = Inapto[i];
        Inapto[i] = Inapto[menor_i];
        Inapto[menor_i] = aux;
    }
    
    //Impressão de saída
    for(int i = 0; i < N; i++){
        if(Apto[i] != 0){
            cout << Apto[i] << endl;
        }
    }
    for(int i = 0; i < N; i++){
        if(Inapto[i] != 0){
            cout << Inapto[i] << endl;
        }
    }
 
 }