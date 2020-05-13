//Autor: Hérson Reis Rezende dos Santos
//Disciplina: Introdução à Lógica de Programação
//Ano: 1º Semestre de Bacharelado em Ciências da Computação (2019.2)
//Linguagem: C++

#include <bits/stdc++.h>
using namespace std;	

int main(){
    
	//Declaração de variáveis
    int Linhas, Colunas;
    cin >> Linhas;
    cin >> Colunas;
    int Matriz[Linhas][Colunas];
    int Resultado[Linhas][Colunas];
    int Soma = 0;
    
	//Entrada de dados
    for(int i = 0; i < Linhas; i++){
        for(int j = 0; j < Colunas; j++){
            cin >> Matriz[i][j];
        }    
    }

	//Algorítmo para ordenar a matriz
    for(int i = 0; i < Linhas; i++){
        
				if(i % 2 == 0){
          for(int j = 0; j < Colunas; j++){
						Soma += Matriz[i][j];				
							if(Soma < 0){
								Soma = 0;
							}
          }
        }
        else if (i % 2 != 0){
          for(int j = Colunas - 1; j >= 0; j--){
						Soma += Matriz[i][j];				
							if(Soma < 0){
								Soma = 0;
							}

          }  
        }

    }
    
	//Impressão de saída
    cout << Soma << endl;
}