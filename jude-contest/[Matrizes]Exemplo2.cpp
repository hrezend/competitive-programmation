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
    int Condicao = 0;
    
	//Entrada de dados
    for(int i = 0; i < Linhas; i++){
        for(int j = 0; j < Colunas; j++){
            cin >> Matriz[i][j];
        }    
    }
    
    for(int i = 0; i < Linhas; i++){
        for(int j = 0; j < Colunas; j++){
          if(j-1 >= 0 && j+1 < Colunas && i-1 >= 0 && i+1 < Linhas){
            if(Matriz[i][j] == 1 && Matriz[i][j+1] == 1){
              if(Matriz[i+1][j] == 1 && Matriz[i+1][j+1] == 1){
                Condicao = 1;
              }
            }
           }  
        }
    }
    
	//Impressão de saída
    if(Condicao == 1){
		cout << "PegarMaMarreeta" << endl;
    }  
    else{
        cout << "Dboas" << endl;       
	}

}
