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
    string Nome[N];
    int Nota[N];
	int aux;
    string auxS;
    int menor_i;
    
	//Entrada de dados
    for(int i = 0; i < N; i++){
        cin >> Nota[i] >> Nome[i];    
    }
    
	//Algorítmo de ordenação
    for (int i = 0; i < N-1; i++){
        menor_i = i;
        for (int j = i+1 ; j < N; j++){
            if(Nota[j] > Nota[menor_i]){
                menor_i = j;
            }
            if(Nota[j] == Nota[menor_i]){
                if(Nome[j] < Nome[menor_i]){
                    menor_i = j;
                }    
            }
        }
        aux = Nota[i];
        Nota[i] = Nota[menor_i];
        Nota[menor_i] = aux;
        
        auxS = Nome[i];
        Nome[i] = Nome[menor_i];
        Nome[menor_i] = auxS;
    }

    //Impressão de saída
    for(int i = 0; i < N; i++){
        cout << Nota[i] << " " << Nome[i] << endl;    
    }

 }