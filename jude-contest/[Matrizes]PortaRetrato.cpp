//Autor: Hérson Reis Rezende dos Santos
//Disciplina: Introdução à Lógica de Programação
//Ano: 1º Semestre de Bacharelado em Ciências da Computação (2019.2)
//Linguagem: C++

#include <bits/stdc++.h>
using namespace std;	
    
    int main(){
	
		//Declaração de variáveis
        int Linhas, Colunas;
        cin >> Linhas >> Colunas;
        char Matriz[Linhas][Colunas];
        int MaiorI = 0, MaiorJ = 0, MenorI = 10000, MenorJ = 10000;

		//Entrada de dados na matriz
        for(int i = 0; i < Linhas; i++){
            for(int j = 0; j < Colunas; j++){
                cin >> Matriz[i][j];
            }    
        }
        
		//Algorítmo de localização das posições a serem cortadas (porta retrato)
        for(int i = 0; i < Linhas; i++){
            for(int j = 0; j < Colunas; j++){
                if(Matriz[i][j] == 49){
                    if(i < MenorI){
                        MenorI = i;
                    }
                    if(j < MenorJ){
                        MenorJ = j;
                    }
                    if(i > MaiorI){
                        MaiorI = i;    
                    }
                    if(j > MaiorJ){
                        MaiorJ = j;
                    }
                }
            }    
        }
        
		//Algorítmo de substituição e corte
        for(int i = MenorI - 1; i <= MaiorI + 1; i++){
                Matriz[i][MenorJ-1] = '*';
                Matriz[i][MaiorJ+1] = '*';
        }
        for(int i = MenorJ - 1; i <= MaiorJ + 1; i++){
                Matriz[MenorI-1][i] = '*';
                Matriz[MaiorI+1][i] = '*';  
        }
    
		
		//Impressão de saída
        for(int i = 0; i < Linhas; i++){
            for(int j = 0; j < Colunas; j++){
                cout << Matriz[i][j] << " ";
            }
                cout << endl;
        }
        
    }